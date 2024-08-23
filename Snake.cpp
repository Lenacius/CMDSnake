#include "Snake.h"

Snake::Snake() {
	board_size = { 10, 10 };
	_snake = { 5, 5 };
}

void Snake::initialize() {
	for (int x = 0; x < board_size.x; x++) {
		for (int y = 0; y < board_size.y; y++) {
			if(	(y == 0 or y == board_size.y - 1)
				or (x == 0 or x == board_size.x - 1) ){
				Renderer::render_at_position(x, y, 'X');
			}
		}
	}

	Renderer::render_at_position(_snake.x, _snake.y, 'O');
}

void Snake::main_loop() {
	game_status = GameStatus::END;
}

void Snake::finish() {

}