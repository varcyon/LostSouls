using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    private Rigidbody rb;
    public float speed = 10;
    public int damage = 5;
    void Start() {
        rb = GetComponent<Rigidbody>();
        Invoke("SelfDestruct", 5f);
    }
    private void FixedUpdate() {
        rb.AddForce(transform.forward * speed);
    }

    private void OnTriggerEnter(Collider other) {
        if (other.GetComponent<PlayerInteractions>()) {
            other.GetComponent<PlayerInteractions>().TakeDamage(damage);
            
        }
        if (other.GetComponent<Enemy>()) {
            other.GetComponent<Enemy>().TakeDamage(damage);
        }
        Destroy(this.gameObject);
    }

    public void SelfDestruct() {
        Destroy(this.gameObject);
    }
}
