using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
#if UNITY_EDITOR
using UnityEditor;
#endif

public class EditScreenUIHandler : MonoBehaviour
{
    public void LoadJournal()
    {
        Debug.Log("loading scene: Journal");
        SceneManager.LoadScene(2, LoadSceneMode.Single);
    }
    public void LoadScan()
    {
        Debug.Log("loading scene: Scan");
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }


    public void ConfirmButton()
    {
        EditManager.Instance.ConfirmData();
        SceneManager.LoadScene(2, LoadSceneMode.Single);
    }

    public void DeleteButton()
    {
        EditManager.Instance.DeleteData();
        SceneManager.LoadScene(2, LoadSceneMode.Single);
    }

    public void NewNameButton()
    {
        Debug.Log("Button Clicked: New Name");
    }
}
