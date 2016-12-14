#include <string>
#include <vector>

enum SceneType
{
	MENU = 1,
	LEVEL
};
enum GameLanguage
{
	ENGLISH = 1,
	SERBIAN
};

class Game
{
public:
	static Game *getInstance();
	void mainLoop();
	void updateLogic();
	void updateGraphic();
	void waitForInput();
	void displayMainMenu();
	void parseInput(std::string input);
	bool m_quitSignal;
	GameLanguage m_gameLanguage;
	bool initialize();

private:
	static Game *m_instance;
	SceneType m_activeScene;
	Game();

	std::vector<std::string> m_textFiles;
	std::string m_serbianTextFilePath;
	std::string m_englishTextFilePath;
	std::string m_levelsFilePath;
};