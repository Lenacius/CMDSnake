#include "Snake.h"

void Snake::initialize() {
	board_size_x = 10;
	board_size_y = 10;

	for (int x = 0; x < board_size_x; x++) {
		for (int y = 0; y < board_size_y; y++) {
			if(	(y == 0 or y == board_size_y - 1)
				or (x == 0 or x == board_size_x - 1) ){
				Renderer::render_at_position(x, y, 'X');
			}
		}
	}
}

void Snake::main_loop() {
	game_status = GameStatus::END;
}

void Snake::finish() {

}