using UnityEngine;
using UnityEngine.SceneManagement;

public class JournalEntrySingleton : MonoBehaviour
{
    private static JournalEntrySingleton _instance = null;
    private static JournalEntrySingleton Instance { get { return _instance; } }
    GameObject parentObject;
    Vector3 parentObjectLocation;
    Vector3 parentObjectTempLocation;


    void Awake()
    {
        if (_instance == null)
        {
            _instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
        parentObject = GameObject.Find("JournalEntries");
        parentObjectLocation = parentObject.transform.localPosition;
        parentObjectTempLocation = parentObjectLocation + new Vector3(10000, 10000, 10000);
    }

    void Update()
    {
        if (SceneManager.GetActiveScene().name == "JournalScreen")
        {
            parentObject.transform.localPosition = parentObjectLocation;
        }
        else
        {
            parentObject.transform.localPosition = parentObjectTempLocation;
        }
    }
}
