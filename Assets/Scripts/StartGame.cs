using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartGame : MonoBehaviour
{
    public SpawnManager spawnManager;
    public PlayerData playerData;
    void Start()
    {
        spawnManager.enemies.Clear();
        playerData.spiritsCollected = 0;
        playerData.health = playerData.maxHealth;
    }

    
}
