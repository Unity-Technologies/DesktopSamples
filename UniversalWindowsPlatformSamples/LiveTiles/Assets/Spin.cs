using UnityEngine;
using System.Collections;

public class Spin : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		float rotation = 100 * Time.deltaTime;
		transform.Rotate(rotation, rotation, rotation);
	}
}
