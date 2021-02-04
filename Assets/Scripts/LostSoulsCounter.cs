using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class LostSoulsCounter : MonoBehaviour
{
    public PlayerData playerData;
    public TMP_Text counter;
    public List<GameObject> lostSouls = new List<GameObject>();

    public GameObject winPanel;

    private void Start() {
        lostSouls.AddRange(GameObject.FindGameObjectsWithTag("LostSpirit"));
    }
    // Update is called once per frame
    void Update()
    {
        counter.text = playerData.spiritsCollected.ToString() + " / " + lostSouls.Count;
        if (playerData.spiritsCollected == lostSouls.Count) {
            Win();
        }

    }


    public void Win() {
        Time.timeScale = 0;
        winPanel.SetActive(true);
    }
}
