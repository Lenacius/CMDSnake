#pragma once
#include "GameObject.h"
#include "Vector2.h"
#include "Renderer.h"
#include "ObjSnake.h"

class ObjBoard : public GameObject {
private:
	Vector2 dimensions;

public:
	ObjBoard();
	ObjBoard(Vector2 dimensions);
	ObjBoard(Vector2 dimensions, char texture);

	void render() override;
	Vector2 get_dimensions();

	bool check_collision_with(ObjSnake* snake);
};