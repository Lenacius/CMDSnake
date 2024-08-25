#include "Snake.h"

Snake::Snake() {
	board = new ObjBoard(Vector2(10, 10), 'X');
	snake = new ObjSnake('O');
}

void Snake::initialize() {
	snake->render();
	board->render();
}

void Snake::main_loop() {
	snake->update();
	Sleep(1000);
}

void Snake::capture_input() {
	if (_kbhit()) {
		char key_pressed = _getch();

		if (key_pressed == 'q')
			game_status = GameStatus::END;

		ObjSnake* aux = dynamic_cast<ObjSnake*>(snake);
		switch (key_pressed) {
			case 'a':
				aux->change_direction(Direction::LEFT);
				break;
			case 's':
				aux->change_direction(Direction::DOWN);
				break;
			case 'd':
				aux->change_direction(Direction::RIGHT);
				break;
			case 'w':
				aux->change_direction(Direction::UP);
		}

	}
}

void Snake::finish() {

}