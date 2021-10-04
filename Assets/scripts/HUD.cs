using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{
  private static HUD instance;
  public static HUD GetInstance(){
    return instance;
  }
  public void Awake(){
    instance = this;
  }
  public Image weaponIcon;
  public Text bulletPower;
  public void UpdateWeaponUI(Sprite icon, int bullet_power){
    weaponIcon.sprite = icon;
    bulletPower.text = bullet_power.ToString();
  }
}
