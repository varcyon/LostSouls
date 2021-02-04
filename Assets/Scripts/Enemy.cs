using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Enemy : MonoBehaviour
{
    public int damage = 5;
    public int health = 10;
    public SpawnManager sp;
    public GameObject player;
    private NavMeshAgent agent;
    public float sightDistance = 5f;

    public bool wander = true;
    public float wanderDist = 3f;
    public Vector3 targeWanderDest;
    public bool traveling;
    public float distThresh = 1f;
    public float wanderDistance;
    public float stoppingDist = 2;

    public GameObject attackTigger;
    public bool attack = false;
    public float attackRange = 2f;
    public float attackRate = 2f;
    public float attackTimer = 0;
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        player = GameObject.FindGameObjectWithTag("Player");
        wander = true;
        traveling = false;

    }

    void Update()
    {
        float dist = Vector3.Distance(transform.position, player.transform.position);
        if (dist <= sightDistance) {
            wander = false;
            agent.stoppingDistance = stoppingDist;
            agent.SetDestination(player.transform.position);
        } else {
            wander = true;
            agent.stoppingDistance = 0;
            agent.SetDestination(targeWanderDest);
        }
        if(dist <= attackRange) {
            attack = true;
        }else {
            attack = false;
        }


        if(attack && !wander) {
            attackTimer += Time.deltaTime;
            if(attackTimer > attackRate) {
                transform.LookAt(player.transform);
                StartCoroutine(Attack(attackTigger));
                attackTimer = 0;
            }
        }

        
        if (wander) {
            attackTimer = 0;
            attack = false;
            if (!traveling) {
                targeWanderDest = new Vector3(transform.position.x + Random.Range(-wanderDist, wanderDist),
                                              0f,
                                              transform.position.z + Random.Range(-wanderDist, wanderDist));
                agent.SetDestination(targeWanderDest);
                agent.stoppingDistance = 0;
                traveling = true;
            }
            wanderDistance = Vector3.Distance(this.transform.position, targeWanderDest);
            if (wanderDistance <= distThresh) {
                agent.SetDestination(this.transform.position);
                StartCoroutine(WaitForNextWanderLoc(1f));
                agent.stoppingDistance = stoppingDist;
            }
        }
    }


    IEnumerator WaitForNextWanderLoc(float time) {
        yield return new WaitForSeconds(time);
        traveling = false;

    }

    public void TakeDamage(int amount) {
        health -= amount;
        if(health <= 0) {
            Death();
        }
    }

    public void Death() {
        sp.enemies.Remove(this.gameObject);
        Destroy(this.gameObject);
    }

    IEnumerator Attack(GameObject theAttack) {
        theAttack.SetActive(true);
        yield return new WaitForSeconds(0.2f);
        theAttack.SetActive(false);
    }

}
