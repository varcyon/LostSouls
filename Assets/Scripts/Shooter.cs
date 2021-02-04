using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Shooter : MonoBehaviour
{
    public GameObject projectile;
    public Transform shootPoint;
    public float shootInterval = 1f;
    public bool isOn = true;
    public bool isMoveShooter = false;
    public Transform waypoint;
    private NavMeshAgent agent;
    private Vector3 home;
    private Vector3 home2;
    public float distToHome;
    public float distToHome2;
    public bool moveToHome = false;
    public bool moveToHome2 = true;
    private void Awake() {
        home = transform.position;
        home2 = waypoint.position;
    }
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.updateRotation = false;
        InvokeRepeating("Shoot", shootInterval, shootInterval);
    }

    void Shoot() {
        if (isOn) {
            Instantiate(projectile, shootPoint.position, shootPoint.rotation);
        }
    }
    private void Update() {

        if (isMoveShooter) {
                distToHome2 = Vector3.Distance(transform.position, home2);
                distToHome = Vector3.Distance(transform.position, home);
                if(moveToHome2 && transform.position != home2 ) { agent.SetDestination(home2); }
                if(moveToHome2 && distToHome2 <= 1f) { moveToHome2 = false; moveToHome = true; }
                if(moveToHome && transform.position != home ){ agent.SetDestination(home); }
                if (moveToHome && distToHome <= 1f) { moveToHome2 = true; moveToHome = false; }
        }

    }
}
