using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CharMove : MonoBehaviour
{  
    public NavMeshAgent agent;
    public Camera cam;
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButton(0)) {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if(Physics.Raycast(ray, out hit)) {
                if (Input.GetKey(KeyCode.LeftShift)) {
                    Vector3 newLook = new Vector3(hit.point.x, transform.position.y, hit.point.z);
                    transform.LookAt(newLook);
                } else {
                      agent.SetDestination(hit.point);
                }
                    
            }
        }
    }
}
