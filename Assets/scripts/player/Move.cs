using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public static float moveSpeed= 20f;
    Vector2 movement;
    public Rigidbody2D rb;
    public GameObject HealthBar;
    // Start is called before the first frame update
    void Start()
    {
    }
    
    // Update is called once per frame
    void Update()
    {
        movement.x = Input.GetAxisRaw("Horizontal");
        movement.y = Input.GetAxisRaw("Vertical");
    }
    void FixedUpdate(){
      rb.MovePosition(rb.position + movement * moveSpeed * Time.fixedDeltaTime);
      RectTransform trans_HealthBar = HealthBar.GetComponent<RectTransform>();
      trans_HealthBar.position = new Vector3(rb.position.x, rb.position.y+2f, 0f);
      //trans_HealthBar.position += new Vector3(movement.x, movement.y, 0f);
    }
}
