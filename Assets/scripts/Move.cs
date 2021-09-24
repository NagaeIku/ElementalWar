using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float moveSpeed= 50f;
    Vector2 movement;
    public Rigidbody2D rb;
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
    }
}
