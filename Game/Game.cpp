#include "Game.h"
#include <iostream>
using namespace std;

Game *Game::m_instance = 0;

Game * Game::getInstance()
{
	if (!m_instance)
		m_instance = new Game();
	return m_instance;
}

void Game::mainLoop()
{
	updateLogic();
	updateGraphic();
	waitForInput(); // biggest flaw of this first version of "game"
}

void Game::updateLogic() {

	// da li postoji scena?
	// scena moze biti main_menu ili dungeon_level
	// ako ne postoji kreiraj je
}

void Game::updateGraphic() {

	// prikazi grafiku - levela ili main menu-a
	// ovde ide cout u nekoj petlji ili tako nesto.
}


// game always waits for user input, at every "frame"
void Game::waitForInput() {
	string str;
	cout << "Command: ";
	getline(std::cin, str);
	parseInput(str);
}

Game::Game()
{
	m_quitSignal = false;
	m_activeScene = SceneType::MENU;
	displayMainMenu();
}

#include "Utility.h"
void Game::displayMainMenu() {
	//cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\" << endl;
	//cout << endl;
	//cout << "					WELCOME TO DUNGEON RAIDER!" << endl;
	//cout << endl;
	//cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\*\\" << endl;
	string line, name;
	line = "";
	name = "../texts/english/game_name.txt";
	Utility::ParseText(line, name);
	cout << endl;cout << endl;cout << endl;
	cout << "You are brave adventurer who is about to enter the BIG DUNGEON! (n, new)" << endl;
	cout << "OR are you a coward who runs away at small glance at the adventure? (q, quit)" << endl;
	cout << "" << endl; cout << "" << endl;
}

void Game::parseInput(string input)
{
	if (m_activeScene == SceneType::MENU) {
		if (input == "n") {
			cout << "loading of first dungeon level...." << endl;
		}
		if (input == "q") {
			cout << "quitting..." << endl;
			m_quitSignal = true;
		}
	}
	if (m_activeScene == SceneType::LEVEL) {
	
	}
}

bool Game::initialize() {

	// C++ 11 added initialization lists to allow the following syntax:
	// std::vector<std::string> v = { "Hello", "World" };

	m_textFiles = {
		"choose_language.txt",
		"command_input.txt",
		"game_name.txt",
		"main_menu.txt",
		"main_menu_help.txt",
		"player_name.txt",
		"tutorial.txt",
		"game_over.txt",
		"high_score.txt",
		"legend.txt"
	};

	m_serbianTextFilePath = "..\\texts\\serbian\\";
	m_englishTextFilePath = "..\\texts\\english\\";
	m_levelsFilePath = "..\\levels\\";

	// TODO : implement later
	return true;
}