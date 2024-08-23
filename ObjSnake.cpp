#include "ObjSnake.h"

ObjSnake::ObjSnake() {
	for (int x = 0; x < INITIAL_SIZE; x++) {
		body.push_back(Vector2(DEFAULT_INITIAL_POSITION.x - x, DEFAULT_INITIAL_POSITION.y));
	}
	head = &body.front();
}

ObjSnake::ObjSnake(Vector2 initial_position) {
	for (int x = 0; x < INITIAL_SIZE; x++) {
		body.push_back(Vector2(initial_position.x - x, initial_position.y));
	}
	head = &body.front();
}

ObjSnake::ObjSnake(char texture) {
	for (int x = 0; x < INITIAL_SIZE; x++) {
		body.push_back(Vector2(DEFAULT_INITIAL_POSITION.x - x, DEFAULT_INITIAL_POSITION.y));
	}
	head = &body.front();
	this->texture = texture;
}

ObjSnake::ObjSnake(Vector2 initial_position, char texture) {
	for (int x = 0; x < INITIAL_SIZE; x++) {
		body.push_back(Vector2(initial_position.x - x, initial_position.y));
	}
	head = &body.front();
	this->texture = texture;
}

void ObjSnake::render(){
	for (Vector2 part : body) {
		Renderer::render_at_position(part.x, part.y, texture);
	}
}