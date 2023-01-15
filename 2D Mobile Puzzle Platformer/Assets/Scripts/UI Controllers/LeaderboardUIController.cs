using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LeaderboardUIController : MonoBehaviour {
    [SerializeField] private GameObject content;
    private Transform levelButtonContainer;
    private Transform entryContainer;
    [SerializeField] private GameObject leaderboardEntryPrefab;
    [SerializeField] private GameObject leaderboardLevelPrefab;

    private Leaderboard leaderboard;
    private int currentLevel = 1;

    private void Awake() {
        leaderboard = Leaderboard.Instance;
        leaderboard.LeaderboardLoaded.AddListener(OnLeaderboardLoaded);

        levelButtonContainer = content.transform.Find("LevelButtons");
        entryContainer = content.transform.Find("Entries/Container/Viewport/Content");

        for (int i = 1; i <= 5; i++) {
            int level = i;
        
            var levelObject = Instantiate(leaderboardLevelPrefab, levelButtonContainer);
            var levelText = levelObject.GetComponentInChildren<Text>();
            levelText.text = "Level " + i;
            levelObject.name = "Level " + i;

            var levelButton = levelObject.GetComponent<Button>();
            Debug.Log(levelButton);
            levelButton.onClick.AddListener(() => GetLeaderboardByLevel(level));
        }
    }

    public void GetLeaderboardByLevel(int level) {
        currentLevel = level;
        leaderboard.FetchEntries();
    }

    private void OnLeaderboardLoaded() {
        ClearLeaderboard();
        var entries = leaderboard.GetEntries(currentLevel);

        int position = 1;
        foreach (var entry in entries) {
            var entryObject = Instantiate(leaderboardEntryPrefab, entryContainer);
            var entryController = entryObject.GetComponent<LeaderboardEntryController>();

            entryController.SetPosition(position++);
            entryController.SetName(entry.GetName());
            entryController.SetTime(entry.GetTime());
            entryController.SetCoins(entry.GetCoins());
        }
    }

    private void ClearLeaderboard() {
        foreach (Transform child in entryContainer) {
            Destroy(child.gameObject);
        }
    }

    public void OpenLevelSelector() {
        SceneManager.LoadScene("Loading Menu");
        SceneManager.LoadSceneAsync("Level Selector");
    }
}
