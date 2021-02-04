using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAttack : MonoBehaviour
{
    private void OnTriggerEnter(Collider other) {
        if (other.CompareTag("Player")) {
            DealDamage(GetComponentInParent<Enemy>().damage, other);
        }
    }
    public void DealDamage(int amount, Collider other) {
        PlayerInteractions p = other.GetComponent<PlayerInteractions>();
        p.TakeDamage(amount);
    }


}
