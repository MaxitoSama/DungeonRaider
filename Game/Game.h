#include <string>

enum SceneType
{
	MENU = 1,
	LEVEL
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

private:
	static Game *m_instance;
	SceneType m_activeScene;
	Game();
};