using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shooting : MonoBehaviour
{
    // Start is called before the first frame update

    public Transform firePoint;
    public GameObject bulletPrefab;

    public float power = 10f;
    public Rigidbody2D rb;

    public Vector2 minPower;
    public Vector2 maxPower;

    public float Lifetime = 1.0f;

    TrajectoryLine tl;

    Camera cam;
    Vector2 force;
    Vector3 startPoint;
    Vector3 endPoint;
    Vector3 playerPosition;

    private void Start()
    {
        cam = Camera.main;
        //tl = GetComponent<TrajectoryLine>();
        InvokeRepeating ("Shoot", 0.5f, 0.5f);
    }
    // Update is called once per frame
    void Update()
    {
        if(PlayerMovement.turn == 1)
            playerPosition = GameObject.Find("Player1").transform.position;
        else
            playerPosition = GameObject.Find("Player2").transform.position;
        playerPosition.z = 15;
        endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
        force = new Vector2(Mathf.Clamp(-1 * (endPoint.x - playerPosition.x), minPower.x, maxPower.x), Mathf.Clamp(-1 * (endPoint.y - playerPosition.y), minPower.y, maxPower.y));
    }
    void Shoot()
    {
        Debug.Log("shoot");
        //tl.vanish();
        GameObject bullet = Instantiate(bulletPrefab, playerPosition, firePoint.rotation);
        Rigidbody2D rb = bullet.GetComponent<Rigidbody2D>();
        rb.AddForce(force * power, ForceMode2D.Impulse);
        WaitAndDestroy(bullet);
    }
    void WaitAndDestroy(GameObject bullet)
    {
        Debug.Log("call");
        Destroy(bullet,Lifetime);
    }

}
