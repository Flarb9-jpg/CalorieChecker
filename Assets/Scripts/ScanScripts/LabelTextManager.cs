using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.IO;
using System;
using System.Text.RegularExpressions;
using System.Linq;
using UnityEngine.UI;
using TMPro;

public class LabelTextManager : MonoBehaviour
{
    public static LabelTextManager Instance { get; private set; }
    private List<FoodData> localData = new();
    public TextAsset localDataFile;

    private List<FoodData> USDAData = new();
    public TextAsset USDADataFile;

    public string foodName;
    public float calorieCount;
    public float carbs;
    public float fat;
    public float protein;
    TextMeshProUGUI consoleOutput;
    public float portionSize;

    int usdaIndex;

    private void Awake()
    {
        consoleOutput = GameObject.Find("ConsoLog").GetComponent<TextMeshProUGUI>();
        localFileStream();
        USDAFileStream();
        
    }

    bool foundObject()
    {
        GameObject searchedObject = GameObject.FindGameObjectWithTag("Text");
        if (searchedObject != null)
        {
            if (searchedObject.activeInHierarchy)
                return true;
        }
        return false;
    }


    void FixedUpdate()
    {
        foundObject();
        if (SceneManager.GetActiveScene().name == "ScanScreen")
        {
            if (foundObject())
            {
                foodName = GameObject.FindGameObjectWithTag("Text").GetComponent<TextMesh>().text.Split(':')[0];
                if (foodName != "")
                {
                    FoodData tempUSDA = FindMacrosInUSDA(foodName);
                    if (tempUSDA.name != null)
                    {
                        //consoleOutput.text = tempUSDA.name + "  " + usdaIndex + " " + tempUSDA.Macro.carb;
                        carbs = tempUSDA.Macro.carb;
                        protein = tempUSDA.Macro.protein;
                        fat = tempUSDA.Macro.fat;
                        calorieCount = tempUSDA.calories;
                        Debug.Log("Scanned food: " + usdaIndex + " " + foodName + " " + carbs + " " + protein + " " + fat + " " + calorieCount);
                    }
                    else
                    {
                        FoodData tempData = FindMacrosInLocal(foodName);
                        if (tempData.name != null)
                        {
                            carbs = tempData.Macro.carb;
                            protein = tempData.Macro.protein;
                            fat = tempData.Macro.fat;
                            calorieCount = tempData.calories;
                        }
                    }
                    
                }
            }
        }
    }

    void localFileStream()
    {
        string fs = localDataFile.text;
        string[] fLines = Regex.Split(fs, "\n");

        for (int i = 0; i < fLines.Length; i++)
        {

            string valueLine = fLines[i];
            string[] values = Regex.Split(valueLine, ",");

            FoodData localDataTemp = new();

            localDataTemp.name = values[0]; //NAME
            localDataTemp.Macro.carb = Convert.ToSingle(values[1]); //CARBS
            localDataTemp.Macro.protein = Convert.ToSingle(values[2]); //PROTEIN
            localDataTemp.Macro.fat = Convert.ToSingle(values[3]); //FATS
            localDataTemp.calories = Convert.ToSingle(values[4]); //CALS
            localDataTemp.portionSize = Convert.ToSingle(values[5]); //PORTION SIZE
            localData.Add(localDataTemp);
        }
    }

    void USDAFileStream()
    {
        string fs = USDADataFile.text;
        string[] fLines = Regex.Split(fs, "\n");

        for(int i=1; i<fLines.Length; i++)
        {
            string currentLine = fLines[i];
            string[] values = Regex.Split(currentLine, ",");
            Debug.Log(values.Length);
            if (values.Length != 6)
                break;
            

            FoodData USDADataTemp = new();

            USDADataTemp.name = values[0]; //NAME
            USDADataTemp.Macro.carb = Convert.ToSingle(values[1]); //CARBS
            USDADataTemp.Macro.protein = Convert.ToSingle(values[2]); //PROTEIN
            USDADataTemp.Macro.fat = Convert.ToSingle(values[3]); //FATS
            USDADataTemp.calories = Convert.ToSingle(values[4]); //CALS
            USDAData.Add(USDADataTemp);
        }
    }

    public FoodData FindMacrosInUSDA(string name)
    {
        FoodData lowestData = new();
        int lowestDist = 5;
        foreach(FoodData foodData in USDAData) // find all items with low lev distances and then choose one of the ones with the lowest values
        {
            int dist = LevenshteinDistance.Compute(name, foodData.name);
            if (dist < 3 && dist < lowestDist)
            {
                lowestDist = dist;
                lowestData = foodData;
            }
            
        }
        return lowestData;
    }

    public FoodData FindMacrosInLocal(string fName) //take string from LabelTextManager and find that food label in the Calorie_data
    {
        FoodData lowestData = new();
        int lowestDist = 5;
        foreach (FoodData foodData in localData)
        {
            int dist = LevenshteinDistance.Compute(fName, foodData.name);
            if (dist < 3 && dist < lowestDist)
            {
                lowestDist = dist;
                lowestData = foodData;
            }
        }
        return lowestData;
    }
}