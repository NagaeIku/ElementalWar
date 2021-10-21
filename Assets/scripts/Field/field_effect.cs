using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
public class field_effect : MonoBehaviour
{
    string cur_col = "transparent";

    SpriteRenderer sprite;

    private PhotonView photonView;
    // Start is called before the first frame update
    void Start()
    {
        sprite = GetComponent<SpriteRenderer>();
        photonView = GetComponent<PhotonView>();
    }

    // Update is called once per frame
    void OnTriggerEnter2D(Collider2D other)
    {
        //Debug.Log(other);
        bullet_property bullet = other.GetComponent<bullet_property>();
        if (bullet != null && cur_col != "transparent") { 
            bullet.change_color(cur_col);
            Debug.Log("you did come herre!");
        }
    }


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.R))
        {
            Debug.Log(photonView.IsMine);
            
            string new_col = "red";
            cur_col = new_col;
            photonView.RPC("change_field", RpcTarget.All, new_col);
            
            
        }

        if (Input.GetKeyDown(KeyCode.B))
        {
            string new_col = "blue";
            photonView.RPC("change_field", RpcTarget.All, new_col);
            cur_col = new_col;
        }

        if (Input.GetKeyDown(KeyCode.Y))
        {
            string new_col = "yellow";
            photonView.RPC("change_field", RpcTarget.All, new_col);
            cur_col = new_col;
        }


    }
    [PunRPC]
    void change_field(string col)
    {
        if (col == "red")
        {

            sprite.color = new Color(1, 0, 0, .5f);
            
        }

        if (col == "blue")
        {
            sprite.color = new Color(0.68f, 0.85f, 0.9f, 1);
        }

        if (col == "yellow")
        {
            sprite.color = new Color(1, 1, 0.8f, 0.5f);
        }

        if (col == "transparent")
        {
            sprite.color = new Color(0, 0, 0, 0);
        }
    }

    
    

    

}