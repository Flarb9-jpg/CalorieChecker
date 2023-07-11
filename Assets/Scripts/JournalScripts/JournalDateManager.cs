using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class JournalDateManager : MonoBehaviour
{
    double totalCals;

    GameObject topBorder;
    TextMeshProUGUI dateText;
    public string date;
    string dateString = DateTime.Now.ToString("MM/dd/yyyy");
    int month, day, year;

    public GameObject entryPrefab;
    public GameObject[] entry;
    public EntryTextManager[] entryManager;

    GameObject bottomBorder;
    TextMeshProUGUI totalCalsText;

    Vector3 bottomOfDate = new Vector3(0, -450, 0);
    Vector3 entrySpacing = new Vector3(0, -50, 0);
    //Vector3 topOfDate = new Vector3(0, 0, 0);
    
    int index = -1;
    public int firstEntryIndex = 0;

    void Awake()
    {
        date = dateString;
        entry = new GameObject[1000];
        entryManager = new EntryTextManager[1000];
        InitializeChildren();
        UpdateDate();
        UpdateTotalCals();
    }


    void LateUpdate()
    {
        UpdateTotalCals();
    }

    void InitializeChildren() 
    {
        bottomOfDate = JournalManager.Instance.bottomOfList;

        topBorder = gameObject.transform.GetChild(0).gameObject; 
        dateText = topBorder.transform.GetChild(0).GetComponent<TextMeshProUGUI>();
        topBorder.transform.localPosition = bottomOfDate;
        bottomOfDate += JournalManager.Instance.topBorderHeight;
        JournalManager.Instance.bottomOfList += JournalManager.Instance.topBorderHeight;

        bottomBorder = gameObject.transform.GetChild(1).gameObject;
        totalCalsText = bottomBorder.transform.GetChild(1).GetComponent<TextMeshProUGUI>();
        bottomBorder.transform.localPosition = bottomOfDate;
    }

    public void AddNewEntry()
    {
        index += 1;
        entry[index] = Instantiate(entryPrefab, Vector3.zero, gameObject.transform.rotation, transform);
        entry[index].transform.localPosition = bottomOfDate;
        bottomOfDate += entrySpacing;
        JournalManager.Instance.bottomOfList += entrySpacing;
        bottomBorder.transform.localPosition = bottomOfDate;
        entryManager[index] = entry[index].GetComponent<EntryTextManager>();
        entryManager[index].entryIndex = index;
    }

    public void MoveDown()
    {
        topBorder.transform.localPosition += entrySpacing;
        bottomBorder.transform.localPosition += entrySpacing;
        for(int i=0; i<=index; i++)
        {
            entry[i].transform.localPosition += entrySpacing;
        }
        bottomOfDate += entrySpacing;
    }

    public void UpdateDate() // convert to MM/DD/YYYY
    {
        DateTime parsedDate = DateTime.Parse(date);
        string outputDate = parsedDate.ToShortDateString();
        dateText.text = outputDate;
        gameObject.name = outputDate;
    }

    void UpdateTotalCals()
    {
        double tempCals = 0;
        for (int i = 2; i < gameObject.transform.childCount; i++)
        {
            tempCals += gameObject.transform.GetChild(i).gameObject.transform.GetComponent<EntryTextManager>().entryCals;
        }
        totalCals = tempCals;
        totalCalsText.text = Math.Round(totalCals, 2) + " Total Calories";
    }

    public void GetEntry()
    {

    }
}
