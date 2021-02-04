using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu]
public class PlayerData : ScriptableObject
{
    public float maxHealth = 50;
    public float health = 50;
    public int spiritsCollected = 0;

    public int forwardAttackDamage = 5;
    public int areaAttackDamage = 3;
}
