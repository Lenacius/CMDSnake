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
	for (int x = 0; x < dimensions.x; x++) {
		for (int y = 0; y < dimensions.y; y++) {
			if ((y == 0 or y == dimensions.y - 1)
				or (x == 0 or x == dimensions.x - 1)) {
				Renderer::render_at_position(x, y, texture);
			}
		}
	}
}