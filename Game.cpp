#include "Game.h"

void Game::run() {
	initialize();

	while (game_status != GameStatus::END) {
		capture_input();
		main_loop();
	}

	finish();
}