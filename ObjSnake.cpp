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

void ObjSnake::update() {
	this->clear_track();

	Vector2 previous_part;
	for (vector<Vector2>::iterator part = body.begin(); part != body.end(); part++) {
		if ((*part) != (*head)) {
			Vector2 aux = previous_part;
			previous_part = (*part);
			(*part) = aux;
		}
		else {
			previous_part = (*head);
			switch (direction) {
				case Direction::UP:
					head->y--;
					break;
				case Direction::DOWN:
					head->y++;
					break;
				case Direction::RIGHT:
					head->x++;
					break;
				case Direction::LEFT:
					head->x--;
					break;
				default:
					break;
			}
		}
	}
	if (increased) {
		increased = false;
		body.push_back(Vector2(previous_part.x, previous_part.y));
		head = &body.front();
	}

	this->render();
}

void ObjSnake::clear_track() {
	Vector2 last_part = body.back();
	Renderer::render_at_position(last_part.x, last_part.y, ' ');
}

void ObjSnake::change_direction(Direction new_direction) {
	if ((direction == Direction::UP and new_direction == Direction::DOWN) or
		(direction == Direction::DOWN and new_direction == Direction::UP) or
		(direction == Direction::LEFT and new_direction == Direction::RIGHT) or
		(direction == Direction::RIGHT and new_direction == Direction::LEFT))
		return;

	direction = new_direction;
}

Vector2 ObjSnake::get_head_position() {
	return *head;
}

vector<Vector2> ObjSnake::get_positions() {
	return body;
}

void ObjSnake::increase() {
	increased = true;
}