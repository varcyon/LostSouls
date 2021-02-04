using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaAttack : MonoBehaviour
{
    public PlayerData playerData;
    private void OnTriggerEnter(Collider other) {
        if (other.CompareTag("Enemy")) {
            Enemy e = other.GetComponent<Enemy>();
            if (e != null) {
                e.TakeDamage(playerData.areaAttackDamage);
            }

        }
    }

}
