using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class LoadScript : MonoBehaviour
{
    public void LoadScan()
    {
        UnityEngine.Debug.Log("Loading scene: ScanScreen");
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }

}