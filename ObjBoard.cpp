#include "ObjBoard.h"

ObjBoard::ObjBoard() {
	dimensions = { 0, 0 };
}

ObjBoard::ObjBoard(Vector2 dimensions) {
	this->dimensions = dimensions;
}

ObjBoard::ObjBoard(Vector2 dimensions, char texture) {
	this->dimensions = dimensions;
	this->texture = texture;
}

void ObjBoard::render() {
	for (int x = 0; x < dimensions.x + 2; x++) {
		for (int y = 0; y < dimensions.y + 2; y++) {
			if ((y == 0 or y == dimensions.y + 1)
				or (x == 0 or x == dimensions.x + 1)) {
				Renderer::render_at_position(x, y, texture);
			}
		}
	}
}

Vector2 ObjBoard::get_dimensions() {
	return dimensions;
}

bool ObjBoard::check_collision_with(ObjSnake* snake) {
	Vector2 snake_head = snake->get_head_position();
	if (snake_head.x == 0 or snake_head.x == dimensions.x+1 or snake_head.y == 0 or snake_head.y == dimensions.y+1)
		return true;
	
	return false;
}