using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class JournalManager : MonoBehaviour
{
    public static JournalManager Instance { get; private set; }

    public GameObject datePrefab;
    GameObject parentObject;

    List<GameObject> journalDate = new List<GameObject>();
    List<JournalDateManager> journalDateManager = new List<JournalDateManager>();

    int index = -1;
    int databaseIndex = 0; // each date saves number before first, and then entry  is found by
    // +1 for every position forward, like first entry would be -1 +1 (0), second would be -1 +2 (1), etc.
    // I could also start at 0 -1 +i, like first entry would be 0 -1 +1 (0), second would 


    public bool reset = false;

    public Vector3 topOfList = new Vector3(0, -450, 0);
    public Vector3 bottomOfList = new Vector3(0, -450, 0);
    Vector3 spaceBetweenDates = new Vector3(0, -75, 0);
    public Vector3 topBorderHeight = new Vector3(0, -75, 0);

    // Awake is called when gameObject is created
    void Awake()
    {
        if (Instance != null)
        {
            Destroy(gameObject);
            return;
        }
        Instance = this; // sets instance pointer to "this" pointer THIS IS NEEDED THO
        DontDestroyOnLoad(gameObject);
        parentObject = GameObject.Find("JournalEntries");
        ResetData();
    }

    public void AddNewDate()
    {
        index += 1; // increase index total by one
        bottomOfList = bottomOfList + spaceBetweenDates; // create a space between dates

        // instantiates a new journalDatePrefab and adds it to the array of journalDates, and then fixes its position.
        GameObject journalDateTemp = Instantiate(datePrefab, Vector3.zero, parentObject.transform.rotation, parentObject.transform);
        journalDate.Add(journalDateTemp);
        journalDate[index].transform.localPosition = Vector3.zero;

        // adds JournalDateManager script to array of JournalDateManager scripts for future easy access
        journalDateManager.Add(journalDate[index].GetComponent<JournalDateManager>());
        journalDateManager[index].firstEntryIndex = databaseIndex;
    }

    public void AddNewEntry(int dateIndex)
    {
        journalDateManager[dateIndex].AddNewEntry();
        for (int i = (1 + dateIndex); i <= index; i++)
        {
            journalDateManager[i].MoveDown();
        }
    }

    public void ChangeDate(int dateIndex, string date)
    {
        journalDateManager[dateIndex].date = date;
        journalDateManager[dateIndex].UpdateDate();
    }

    public void InputNewValues(int dateIndex, int entryIndex, FoodData foodData)
    {
        string ename = foodData.name;
        float ecarbs = foodData.Macro.carb;
        float eprotein = foodData.Macro.protein;
        float efats = foodData.Macro.fat;
        float ecals = foodData.calories;
        journalDateManager[dateIndex].entryManager[entryIndex].InputNewValues(ename, ecarbs, eprotein, efats, ecals);
    }

    public void PushDataToJournal()
    {
        int index = 0;
        databaseIndex = 0;
        foreach (List<FoodData> dateData in CsvInteractionScript.Instance.appendableData)
        {
            AddNewDate();
            ChangeDate(index, dateData[0].date);
            int index2 = 0;
            foreach (FoodData fData in dateData)
            {
                AddNewEntry(index);
                InputNewValues(index, index2, fData);
                index2 += 1;
                databaseIndex += 1;
            }
            index += 1;
        }
    }

    public void ResetData()
    {
        index = -1;
        bottomOfList = topOfList;

        foreach (Transform child in parentObject.transform)
        {
            Destroy(child.gameObject);
        }
        journalDate.Clear();
        journalDateManager.Clear();
        PushDataToJournal();
        reset = true;
    }
}