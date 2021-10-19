using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CureEffects : MonoBehaviour
{
    //public float addSpeed = 20f;

    public int addHP = 20;

    public void onClick() {

        PlayerMovement.currentHP += addHP;
        // Debug.Log(PlayerMovement.currentHP;
    }
}
