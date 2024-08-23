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
	game_status = GameStatus::END;
}

void Snake::finish() {

}