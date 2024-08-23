#include "Game.h"

void Game::run() {
	initialize();

	while (game_status != GameStatus::END) {
		main_loop();
	}

	finish();
}