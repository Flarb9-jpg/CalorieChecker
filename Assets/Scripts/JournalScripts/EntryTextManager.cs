using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class EntryTextManager : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public TextMeshProUGUI carbsText;
    public TextMeshProUGUI proteinText;
    public TextMeshProUGUI fatsText;
    public TextMeshProUGUI calsText;

    public string entryName = "";
    public float entryCarbs = 0;
    public float entryProtein = 0;
    public float entryFats = 0;
    public float entryCals = 0;

    public int entryIndex = 0;
    JournalDateManager dateManager;

    int dataEntryIndex = 0;


    // Start is called before the first frame update
    void Awake()
    {
        InputNewValues("Entry Name", 0, 0, 0, 0);
        UpdateValues();
        dateManager = transform.parent.gameObject.GetComponent<JournalDateManager>();
    }

    // Update is called once per frame
    void Update()
    {
        UpdateValues();
    }

    public void LoadEdit()
    {
        SceneManager.LoadScene(3, LoadSceneMode.Single);

        dataEntryIndex = dateManager.firstEntryIndex + entryIndex;
        EditManager.Instance.EditData(dataEntryIndex);
    }

    public void InputNewValues(string ename, float ecarbs, float eprotein, float efats, float ecals)
    {
        entryName = ename;
        entryCarbs = ecarbs;
        entryProtein = eprotein;
        entryFats = efats;
        entryCals = ecals;
    }

    void UpdateValues()
    {
        nameText.text = entryName;
        carbsText.text = "" + entryCarbs;
        proteinText.text = "" + entryProtein;
        fatsText.text = "" + entryFats;
        calsText.text = "" + entryCals;
    }
}
