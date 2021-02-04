using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInteractions : MonoBehaviour
{
    public PlayerData PlayerData;
    public GameObject forwardAttack;
    public GameObject areaAttack;
    bool disableForwardattack;
    bool disableAreaattack;

    public GameObject deathPanel;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!disableForwardattack && Input.GetKeyDown(KeyCode.E)) {
            disableForwardattack = true;
            StartCoroutine(Attack(forwardAttack));
        }

        if (!disableAreaattack && Input.GetKeyDown(KeyCode.Q)) {
            disableAreaattack = true;
            StartCoroutine(Attack(areaAttack));
        }
    }

    public void TakeDamage(int amount) {
        PlayerData.health -= amount;
        if(PlayerData.health <= 0) {
            Death();
        }
    }
    private void Death() {
        GetComponent<CharMove>().agent.SetDestination(transform.position);
        deathPanel.SetActive(true);
        GetComponent<CharMove>().enabled = false;
        this.enabled = false;

    }

    IEnumerator Attack(GameObject theAttack) {
        Debug.Log("attacking..");
        theAttack.SetActive(true);
        yield return new WaitForSeconds(0.2f);
        theAttack.SetActive(false);
        disableForwardattack = false;
        disableAreaattack = false;
    }
}
