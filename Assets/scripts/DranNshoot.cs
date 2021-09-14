using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DranNshoot : MonoBehaviour
{
    public float power = 10f;
    public Rigidbody2D rb;

    public Vector2 minPower;
    public Vector2 maxPower;
    
    TrajectoryLine tl;

    Camera cam;
    Vector2 force;
    Vector3 startPoint;
    Vector3 endPoint;
    Vector3 playerPosition;

    private void Start()
    {
        cam = Camera.main;
        tl = GetComponent<TrajectoryLine>();
        
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            startPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            startPoint.z = 15;
        }

        if (Input.GetMouseButton(0))
        {
            Vector3 currentPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            currentPoint.z = 15;
            playerPosition = GameObject.Find("bullet1").transform.position;
            tl.RenderLine(playerPosition, currentPoint);
        }

        if (Input.GetMouseButtonUp(0))
        {
            endPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            endPoint.z = 15;
            
            force = new Vector2(Mathf.Clamp(startPoint.x-endPoint.x, minPower.x, maxPower.x), Mathf.Clamp(startPoint.y-endPoint.y, minPower.y, maxPower.y));
            Debug.Log(force);
            rb.AddForce(force * power, ForceMode2D.Impulse);

        }

    }
}