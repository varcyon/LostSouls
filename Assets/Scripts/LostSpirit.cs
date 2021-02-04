using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LostSpirit : MonoBehaviour
{
    public int heal = 10;
    public PlayerData playerData;
    private void OnTriggerEnter(Collider other) {
       if(other.CompareTag("Player")) {
            playerData.spiritsCollected++;
            playerData.health += heal;
            Destroy(this.gameObject);
        }
    }
    private void Update() {
        transform.Rotate(Vector3.up * 1);
    }
}
