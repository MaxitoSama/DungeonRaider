#include "Game.h"


int main(int argc, char const *argv[]) {

	do {
		Game::getInstance()->mainLoop();
	} while (!Game::getInstance()->m_quitSignal);

	return 0;
}
