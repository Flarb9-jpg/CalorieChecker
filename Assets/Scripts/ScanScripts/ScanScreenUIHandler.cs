using System.Collections;
using System.Diagnostics;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScanScreenUIHandler : MonoBehaviour
{

    public GameObject confirmMessageObject;
    public TextMeshProUGUI confirmationText;

    public void LoadJournal()
    {
        UnityEngine.Debug.Log("Loading scene: CalorieList");
        SceneManager.LoadScene(2, LoadSceneMode.Single);
    }
    public void LoadEdit()
    {
        UnityEngine.Debug.Log("Loading scene: Edit");
        SceneManager.LoadScene(3, LoadSceneMode.Single);
    }

    public void LoadInfo()
    {
        UnityEngine.Debug.Log("Loading scene: InfoScreen");
        SceneManager.LoadScene(4, LoadSceneMode.Single);
    }

    public void ConfirmInput()
    {
        DataManager.Instance.ConfirmFoodData();
        if (DataManager.Instance.didScan)
        {
            StartCoroutine(ConfirmMessageOutput());

            //For testing purposes
            confirmationText = confirmMessageObject.GetComponentInChildren<TextMeshProUGUI>();
        }

        GameObject.Find("FoodPortionMessage").SetActive(false);
    }

    IEnumerator ConfirmMessageOutput()
    {
        DataManager.Instance.didScan = false;
        confirmMessageObject.SetActive(true);
        yield return new WaitForSeconds(1);
        confirmMessageObject.SetActive(false);
    }
}
