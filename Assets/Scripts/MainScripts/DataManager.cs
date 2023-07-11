using System;
using System.IO;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public struct Macro //define macro data for use in FoodData class
{
    public float carb, protein, fat;
}

public struct FoodData //define FoodData class for json file
{
    public string date; //#mmddyyyy
    public string time;
    public string name;
    public float calories;
    public float portionSize;
    public Macro Macro;
}

public class DataManager : MonoBehaviour
{
    public static DataManager Instance { get; private set; }
    public FoodData FoodEntry; //new variable declared
    public FoodData NewFoodEntry; //new variable for storing load data

    public LabelTextManager LabelInstance;
    //public JournalManager JournalMangerInstance; might not need this
    public CsvInteractionScript CsvInstance;

    public float foodPortion;

    public bool didScan = false;

    private void Awake() //is called when gameObject is created
    {
        if (Instance != null) //condition to destroy duplicate instances
        {
            Destroy(gameObject);
            return;
        }
        else
        {
            Instance = this; //sets instance pointer to "this" pointer
            DontDestroyOnLoad(gameObject);
        }
    }


    [System.Serializable]
    class ConfirmData //save class for food entries
    {
        public FoodData FoodEntry;
    }

    public void GetFoodData()
    {
        Debug.Log("calc: " + foodPortion);
        if (GameObject.Find("PortionInput").GetComponentInChildren<TMP_InputField>().text == "")
            foodPortion = LabelInstance.FindMacrosInLocal(LabelInstance.foodName).portionSize /100f;
        else
            foodPortion = (Convert.ToSingle(GameObject.Find("PortionInput").GetComponentInChildren<TMP_InputField>().text) * LabelInstance.FindMacrosInLocal(LabelInstance.foodName).portionSize) / 100f; // get rid of error message when text field is not 
        FoodEntry.name = LabelInstance.foodName;
        FoodEntry.calories = (float)Math.Round(LabelInstance.calorieCount * foodPortion, 2);
        FoodEntry.Macro.carb = (float)Math.Round(LabelInstance.carbs * foodPortion, 2);
        FoodEntry.Macro.protein = (float)Math.Round(LabelInstance.protein * foodPortion, 2);
        FoodEntry.Macro.fat = (float)Math.Round(LabelInstance.fat * foodPortion, 2);
        FoodEntry.date = DateTime.Now.ToString("yyyy-MM-dd");
        FoodEntry.time = DateTime.Now.ToString("HH:mm");
    }

    void Update()
    {
        if (SceneManager.GetActiveScene().name == "ScanScreen")
        {
            LabelInstance = GameObject.Find("LabelTextManager").GetComponent<LabelTextManager>();
            GameObject portionInput = GameObject.Find("PortionInput");
            if (portionInput != null)
            {
                if (portionInput.activeSelf == true)
                {
                    GetFoodData();
                }
            }
        }
    }

    public void ConfirmFoodData()
    {
        ConfirmData data = new ConfirmData();
        GetFoodData();
        if (!(FoodEntry.name == ""))/* && ((FoodEntry.calories + FoodEntry.Macro.carb + FoodEntry.Macro.protein + FoodEntry.Macro.fat) == 0))*/
        {
            data.FoodEntry = FoodEntry;

            if (File.Exists(GetPath()))
            {
                Debug.Log(data.FoodEntry);
                CsvInteractionScript.Instance.AppendData(data.FoodEntry);
            }
            else
            {
                CsvInteractionScript.Instance.InitializeDataFile();
                CsvInteractionScript.Instance.AppendData(data.FoodEntry);
            }

            Debug.Log(data.FoodEntry.name + " " + data.FoodEntry.calories + " " + data.FoodEntry.date);
            Debug.Log(GetPath());
            didScan = true;
        }
        else
        {
            Debug.Log("Nothing is being scanned!");
            didScan = false;
        }
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
