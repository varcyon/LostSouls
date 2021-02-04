using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour
{
    public GameObject enemy;
    public SpawnManager spawnManager;
    public float spawnInterval;
    public int maxEnemies = 30;
    void Start()
    {
        spawnInterval = Random.Range(1, 5);
        InvokeRepeating("Spawn", spawnInterval, spawnInterval);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Spawn() {
        if(spawnManager.enemies.Count >= maxEnemies ){ return; }
        spawnManager.enemies.Add( Instantiate(enemy, transform.position, Quaternion.identity));
    }
}
