using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForwardAttack : MonoBehaviour
{
     public PlayerData playerData;
 
    private void OnTriggerEnter(Collider other) {
        if (other.CompareTag("Enemy")) {
            Debug.Log("trigger");
            Enemy e = other.GetComponent<Enemy>();
            if(e != null) {
                e.TakeDamage(playerData.forwardAttackDamage);
            }
        }
    }
   
}
