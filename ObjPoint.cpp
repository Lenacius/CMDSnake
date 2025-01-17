#include "ObjPoint.h"

ObjPoint::ObjPoint() {
	position = INITIAL_POSITION;
}

ObjPoint::ObjPoint(Vector2 initial_position) {
	position = initial_position;
}

ObjPoint::ObjPoint(char texture) {
	position = INITIAL_POSITION;
	this->texture = texture;
}

ObjPoint::ObjPoint(Vector2 initial_position, char texture) {
	position = initial_position;
	this->texture = texture;
}

void ObjPoint::render() {
	Renderer::render_at_position(position.x, position.y, texture);
}

bool ObjPoint::check_collision_with(ObjSnake* snake) {
	if (snake->get_head_position() == position) {
		snake->increase();
		return true;
	}

	return false;
}

void ObjPoint::randomize_new_position(ObjBoard* board, ObjSnake* snake) {
	vector<Vector2> snake_body = snake->get_positions();
	bool new_position_found = false;
	while (!new_position_found) {
		Vector2 dimensions = board->get_dimensions();
		position.x = 1 + rand() % dimensions.x;
		position.y = 1 + rand() % dimensions.y;

		new_position_found = true;

		for (Vector2 part : snake_body) {
			if (part == position)
				new_position_found = false;
		}
	}
}