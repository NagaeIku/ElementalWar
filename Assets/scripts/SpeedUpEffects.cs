using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedUpEffects : MonoBehaviour
{
    public float addSpeed = 20f;

    public void onClick() {
        // Debug.Log(Move.moveSpeed);
        Move.moveSpeed += addSpeed;
    }
}
