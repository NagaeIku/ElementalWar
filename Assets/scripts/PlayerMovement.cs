using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerMovement : MonoBehaviour
{
    public int maxHealth = 20;
    public int currentHealth;
    public float playermovementspeed=1;

    public HealthBar healthBar;

    void Start()
    {
        currentHealth = maxHealth;
        healthBar.SetMaxHealth(maxHealth);

    }
    public Rigidbody2D rb;
    public Camera cam;
    // Update is called once per frame

    Vector3 playerPosition;
    Vector2 movement;
    Vector2 mousePos;
    Vector2 mousePos2;
    // public bool inputEnabled = false;
    public static int turn = 1;
    void Update()
    {

      if(Input.GetKeyDown(KeyCode.Space)){
        TakeDamage(2);
      }




        mousePos = cam.ScreenToWorldPoint(Input.mousePosition);
        if(PlayerMovement.turn == 1)
            playerPosition = GameObject.Find("Player1").transform.position;
        else
            playerPosition = GameObject.Find("Player2").transform.position;
        mousePos.x = mousePos.x - playerPosition.x;
        mousePos.y = mousePos.y - playerPosition.y;
        if (Input.GetKey(KeyCode.RightArrow)){
          this.gameObject.transform.position+=new Vector3(0.1f*playermovementspeed,0,0);
        }
        if (Input.GetKey(KeyCode.LeftArrow)){
          this.gameObject.transform.position-=new Vector3(0.1f*playermovementspeed,0,0);
        }
        if (Input.GetKey(KeyCode.UpArrow)){
          this.gameObject.transform.position+=new Vector3(0,0.1f*playermovementspeed,0);
        }
        if (Input.GetKey(KeyCode.DownArrow)){
          this.gameObject.transform.position-=new Vector3(0,0.1f*playermovementspeed,0);
        }
        // Debug.Log(mousePos);
        // Debug.Log(player1Position);
    }
    void Player1Turn()
    {
        PlayerMovement.turn = 1;
    }

    void Player2Turn()
    {
        PlayerMovement.turn = 2;
    }
    void FixedUpdate()
    {
        Vector2 lookDir = mousePos;
        float angle = Mathf.Atan2(-1 * lookDir.y, -1 * lookDir.x) * Mathf.Rad2Deg;
        rb.rotation = angle;
    }
    void TakeDamage(int damage)
    {

        currentHealth -= damage;
        healthBar.SetHealth(currentHealth);

    }
}
