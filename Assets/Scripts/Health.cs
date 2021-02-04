using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
[ExecuteInEditMode]
public class Health : MonoBehaviour
{
    public Image health;
    public PlayerData playerData;
    public float healthAmount;

    // Update is called once per frame
    void Update()
    {
        if(playerData.health > playerData.maxHealth) {
            playerData.health = playerData.maxHealth;
        }
        healthAmount = Mathf.Clamp01(Mathf.InverseLerp(0, 1, playerData.health / playerData.maxHealth));
        health.fillAmount = Mathf.Clamp01(Mathf.InverseLerp(0,1, playerData.health / playerData.maxHealth));
    }
}
