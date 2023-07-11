using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.Text;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;

public class CsvInteractionScript : MonoBehaviour
{
    public static CsvInteractionScript Instance { get; private set; }

    private List<string[]> rowData = new List<string[]>();
    public List<List<FoodData>> appendableData = new List<List<FoodData>>();
    string filePath;

    // Awake is called when gameObject is created
    private void Awake()
    {
        if (Instance != null) // condition to destroy duplicate instances
        {
            Destroy(gameObject);
            return;
        }
        Instance = this; // sets instance pointer to "this" pointer
        DontDestroyOnLoad(gameObject);

        filePath = GetPath();
        InitializeDataFile();
        SortAndSaveData();
        UpdateData();
    }

    public void InitializeDataFile()
    {
        if (!File.Exists(filePath))
        {
            using (FileStream fs = File.Create(filePath))
            {
                string[] rowDataTemp = new string[7];
                rowDataTemp[0] = "Date";
                rowDataTemp[1] = "Time";
                rowDataTemp[2] = "Name";
                rowDataTemp[3] = "Carbs";
                rowDataTemp[4] = "Protein";
                rowDataTemp[5] = "Fats";
                rowDataTemp[6] = "Cals";
                rowData.Add(rowDataTemp);
            }
        }
        else
        {
            using (var reader = new StreamReader(@filePath))
            {
                while (!reader.EndOfStream)
                {
                    string[] rowDataTemp = new string[7];

                    string line = reader.ReadLine();
                    if (line != "")
                    {
                        string[] values = line.Split(',');

                        rowDataTemp[0] = values[0];
                        rowDataTemp[1] = values[1];
                        rowDataTemp[2] = values[2];
                        rowDataTemp[3] = values[3];
                        rowDataTemp[4] = values[4];
                        rowDataTemp[5] = values[5];
                        rowDataTemp[6] = values[6];
                        rowData.Add(rowDataTemp);
                    }
                }
            }
        }
    }

    public void AppendData(FoodData foodData) // Remove function is next
    {
        string[] rowDataTemp = new string[7];
        rowDataTemp[0] = foodData.date; // Date
        rowDataTemp[1] = foodData.time; // Time
        rowDataTemp[2] = foodData.name; // Name
        rowDataTemp[3] = foodData.Macro.carb.ToString(); // Carbs
        rowDataTemp[4] = foodData.Macro.protein.ToString(); // Protein
        rowDataTemp[5] = foodData.Macro.fat.ToString(); // Fats
        rowDataTemp[6] = foodData.calories.ToString(); // Cals
        rowData.Add(rowDataTemp);
        SortAndSaveData();
        UpdateData();
    }

    void SortAndSaveData()
    {
        List<string[]> sortingData = rowData;
        string[] tempData = sortingData[0];
        sortingData.RemoveAt(0);

        var dateComparer = new DateComparer();
        var timeComparer = new TimeComparer();
        sortingData = sortingData
            .OrderBy(arr => arr[0], dateComparer)
            .ThenBy(arr => arr[1], timeComparer)
            .ToList();

        sortingData.Insert(0, tempData);
        rowData = sortingData;

        string[][] output = new string[rowData.Count][];
        for (int i = 0; i < output.Length; i++)
        {
            output[i] = rowData[i];
        }

        int length = output.GetLength(0);
        string delimiter = ",";

        StringBuilder sb = new StringBuilder();

        for (int index = 0; index < length; index++)
            sb.AppendLine(string.Join(delimiter, output[index]));

        StreamWriter outStream = System.IO.File.CreateText(filePath);
        outStream.WriteLine(sb);
        outStream.Close();
    }

    public void RemoveData(int index) // work on in next sprint, figure out if inputting index to remove or FoodData object
    {
        rowData.RemoveAt(index+1);
        SortAndSaveData();
        UpdateData();
    }

    public string[] GetData(int index)
    {
        return rowData[index + 1];
    }

    public void EditData(int index, FoodData foodData)
    {
        RemoveData(index);
        AppendData(foodData);
    }

    public void UpdateData()
    {
        List<List<FoodData>> foodData = new List<List<FoodData>>();
        bool skipFirst = true;
        foreach (string[] dataline in rowData)
        {
            if (skipFirst == true)
            {
                skipFirst = false;
                continue;
            }

            bool foundPreviousDate = false;
            foreach (List<FoodData> dateData in foodData) //for each list in the list of lists
            {
                if (dateData[0].date == dataline[0]) // if the date of an item already in list = new date
                {
                    FoodData foodDataTemp;
                    foodDataTemp.date = dataline[0]; // Date
                    foodDataTemp.time = dataline[1]; // Time
                    foodDataTemp.name = dataline[2]; // Name
                    foodDataTemp.Macro.carb = Convert.ToSingle(dataline[3]); // Carbs
                    foodDataTemp.Macro.protein = Convert.ToSingle(dataline[4]); // Protein
                    foodDataTemp.Macro.fat = Convert.ToSingle(dataline[5]); // Fats
                    foodDataTemp.calories = Convert.ToSingle(dataline[6]); // Calories
                    foodDataTemp.portionSize = 0;
                    dateData.Add(foodDataTemp);
                    foundPreviousDate = true;
                    break; // add that foodData to that list
                }
            }

            if (foundPreviousDate == false)// create a new list and fill it into there if no previous was found
            {
                FoodData foodDataTemp;
                foodDataTemp.date = dataline[0]; // Date
                foodDataTemp.time = dataline[1]; // Time
                foodDataTemp.name = dataline[2]; // Name
                foodDataTemp.Macro.carb = Convert.ToSingle(dataline[3]); // Carbs
                foodDataTemp.Macro.protein = Convert.ToSingle(dataline[4]); // Protein
                foodDataTemp.Macro.fat = Convert.ToSingle(dataline[5]); // Fats
                foodDataTemp.calories = Convert.ToSingle(dataline[6]); // Calories
                foodDataTemp.portionSize = 0;
                List<FoodData> dateDataTemp = new List<FoodData>();
                dateDataTemp.Add(foodDataTemp);
                foodData.Add(dateDataTemp);
            }
        }
        appendableData = foodData;
    }

    // Following method is used to retrive the relative path as device platform
    private string GetPath()
    {
#if UNITY_EDITOR
        return Application.dataPath + "/CSV/" + "Saved_data.csv";
#elif UNITY_ANDROID
        return Application.persistentDataPath+"Saved_data.csv";
#elif UNITY_IPHONE
        return Application.persistentDataPath+"/"+"Saved_data.csv";
#else
        return Application.dataPath +"/"+"Saved_data.csv";
#endif
    }
}

public class DateComparer : IComparer<string>
{
    public int Compare(string x, string y)
    {
        var regex = new Regex(@"/^\d{4}-(0[1-9]|1[0-2])-(0[1-9]|[12][0-9]|3[01])$/"); // date format yyyy-MM-dd 

        // run the regex on both strings
        var xRegexResult = regex.Match(x);
        var yRegexResult = regex.Match(y);

        // check if they are both numbers
        if (xRegexResult.Success && yRegexResult.Success)
        {
            return int.Parse(xRegexResult.Groups[1].Value).CompareTo(int.Parse(yRegexResult.Groups[1].Value));
        }

        // otherwise return as string comparison
        return x.CompareTo(y);
    }
}

public class TimeComparer : IComparer<string>
{
    public int Compare(string x, string y)
    {
        var regex = new Regex(@"/^([0-9]|0[0-9]|1[0-9]|2[0-3]):[0-5][0-9]$/"); // time format HH:mm

        // run the regex on both strings
        var xRegexResult = regex.Match(x);
        var yRegexResult = regex.Match(y);

        // check if they are both numbers
        if (xRegexResult.Success && yRegexResult.Success)
        {
            return int.Parse(xRegexResult.Groups[1].Value).CompareTo(int.Parse(yRegexResult.Groups[1].Value));
        }

        // otherwise return as string comparison
        return x.CompareTo(y);
    }
}
