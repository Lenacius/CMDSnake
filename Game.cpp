#include "Game.h"

void Game::run() {
	initialize();

	while (game_status == GameStatus::OPEN) {
		main_loop();
	}

	finish();
}