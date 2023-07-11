using UnityEngine;
using UnityEngine.SceneManagement;
#if UNITY_EDITOR
#endif

public class JournalScreenUIHandler : MonoBehaviour
{
    public void LoadScan()
    {
        Debug.Log("loading scene: Scan");
        SceneManager.LoadScene(1, LoadSceneMode.Single);
    }

    private void Start()
    {
        if (JournalManager.Instance.reset == true)
            JournalManager.Instance.ResetData();
    }
}
