using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shooting : MonoBehaviour
{
    // Start is called before the first frame update
    
    public Transform firePoint;
    public GameObject bulletPrefab;
    public float bulletForce = 10f;

    public Vector2 minPower;
    public Vector2 maxPower;

    public float Lifetime = 1.0f;

    Camera cam;
    Vector2 bulletDir;
    //Vector2 force;
    Vector3 endPoint;
    Vector3 playerPosition;
    private void Start()
    {
        cam = Camera.main;
        InvokeRepeating ("Shoot", 0.5f, 0.5f);
    }
    // Update is called once per frame
    void Update()
    {
        if(PlayerMovement.turn == 1)
            playerPosition = GameObject.Find("Player1").transform.position;
        else
            playerPosition = GameObject.Find("Player2").transform.position;
        endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
        //force = new Vector2(Mathf.Clamp((endPoint.x - playerPosition.x), minPower.x, maxPower.x), Mathf.Clamp((endPoint.y - playerPosition.y), minPower.y, maxPower.y));
        bulletDir = new Vector2((endPoint.x - playerPosition.x), (endPoint.y - playerPosition.y));
        bulletDir.Normalize();
    }
    
    void Shoot()
    {
        GameObject bullet = Instantiate(bulletPrefab, firePoint.position, firePoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(bulletForce*bulletDir, ForceMode2D.Impulse);
        WaitAndDestroy(bullet);
    }
    void WaitAndDestroy(GameObject bullet)
    {
        Debug.Log("call");
        Destroy(bullet,Lifetime);
    }

}
