using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class FoodPortionScript : MonoBehaviour
{
    public static FoodPortionScript Instance { get; private set; }

    [SerializeReference]
    GameObject FoodPortionMessage;
    [SerializeField]
    TextMeshProUGUI FoodName;

    // Start is called before the first frame update
    void Start()
    {
        FoodPortionMessage.SetActive(false);
    }

    public void Update()
    {
        FoodName.text = GameObject.Find("LabelTextManager").GetComponent<LabelTextManager>().foodName;
    }

    public void OnPortionConfirmClick()
    {
        if (GameObject.FindGameObjectWithTag("Text").GetComponent<TextMesh>().text != "")
        {
            FoodPortionMessage.SetActive(true);
        }
        else
        {
            Debug.Log("Nothing Being Scanned");
            return;
        }
    }

    public void OnPortionCancelClick()
    {
        FoodPortionMessage.SetActive(false);

    }
}
