using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class EditManager : MonoBehaviour
{
    public static EditManager Instance { get; private set; }

    string[] screenData;
    bool newValues = false;
    int valuesIndex = -99;

    void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this; // sets instance pointer to "this" pointer THIS IS NEEDED THO
        DontDestroyOnLoad(gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        if ((SceneManager.GetActiveScene().name == "EditScreen") && newValues)
        {
            PopulateScreenValues();
            newValues = false;
        }
    }

    public void EditData(int index)
    {
        screenData = CsvInteractionScript.Instance.GetData(index);
        valuesIndex = index;
        newValues = true;
    }

    void PopulateScreenValues()
    {
        GameObject.Find("DateInput").GetComponentInChildren<TMP_InputField>().text = screenData[0]; // Date
        GameObject.Find("TimeInput").GetComponentInChildren<TMP_InputField>().text = screenData[1]; // Time
        GameObject.Find("NameInput").GetComponentInChildren<TMP_InputField>().text = screenData[2]; // Name
        GameObject.Find("CarbsInput").GetComponentInChildren<TMP_InputField>().text = screenData[3]; // Carbs
        GameObject.Find("ProteinInput").GetComponentInChildren<TMP_InputField>().text = screenData[4]; // Protein
        GameObject.Find("FatsInput").GetComponentInChildren<TMP_InputField>().text = screenData[5]; // Fats
        GameObject.Find("CalorieInput").GetComponentInChildren<TMP_InputField>().text = screenData[6]; // Calories
    }

    public void ConfirmData()
    {
        if (valuesIndex != -99)
        {
            FoodData foodDataTemp;
            foodDataTemp.date = GameObject.Find("DateInput").GetComponentInChildren<TMP_InputField>().text; // Date
            foodDataTemp.time = GameObject.Find("TimeInput").GetComponentInChildren<TMP_InputField>().text; // Time
            foodDataTemp.name = GameObject.Find("NameInput").GetComponentInChildren<TMP_InputField>().text; // Name
            foodDataTemp.Macro.carb = Convert.ToSingle(GameObject.Find("CarbsInput").GetComponentInChildren<TMP_InputField>().text); // Carbs
            foodDataTemp.Macro.protein = Convert.ToSingle(GameObject.Find("ProteinInput").GetComponentInChildren<TMP_InputField>().text); // Protein
            foodDataTemp.Macro.fat = Convert.ToSingle(GameObject.Find("FatsInput").GetComponentInChildren<TMP_InputField>().text); // Fats
            foodDataTemp.calories = Convert.ToSingle(GameObject.Find("CalorieInput").GetComponentInChildren<TMP_InputField>().text); // Calories
            foodDataTemp.portionSize = 0;
            CsvInteractionScript.Instance.EditData(valuesIndex, foodDataTemp);
        }
    }

    public void DeleteData()
    {
        if (valuesIndex != -99)
            CsvInteractionScript.Instance.RemoveData(valuesIndex);
    }
}
