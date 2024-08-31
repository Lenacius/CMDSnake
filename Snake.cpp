#include "Snake.h"

Snake::Snake() {
	board = new ObjBoard(Vector2(10, 10), 'X');
	snake = new ObjSnake('O');
	point = new ObjPoint(Vector2(5, 6), '*');
}

void Snake::initialize() {
	snake->render();
	board->render();
	point->render();
}

void Snake::main_loop() {
	snake->update();
	if (snake->check_self_collision())
		game_status = GameStatus::END;
	if (point->check_collision_with(snake)) {
		point->randomize_new_position(board, snake);
		point->render();
	}
	Sleep(GAME_SPEED); // the lower the fastest
}

void Snake::capture_input() {
	if (_kbhit()) {
		char key_pressed = _getch();

		if (key_pressed == 'q')
			game_status = GameStatus::END;

		switch (key_pressed) {
			case 'a':
				snake->change_direction(Direction::LEFT);
				break;
			case 's':
				snake->change_direction(Direction::DOWN);
				break;
			case 'd':
				snake->change_direction(Direction::RIGHT);
				break;
			case 'w':
				snake->change_direction(Direction::UP);
		}
	}
}

void Snake::finish() {
	Renderer::render_at_position(0, board->get_dimensions().y + 1, '\n');
}