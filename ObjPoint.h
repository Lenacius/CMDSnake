#pragma once
#include "GameObject.h"
#include "ObjSnake.h"
#include "ObjBoard.h"
#include "Vector2.h"
#include <vector>
#include <random>

using namespace std;

class ObjPoint : public GameObject {
private:
	const Vector2 INITIAL_POSITION = { 1, 1 };

	Vector2 position;
public:
	ObjPoint();
	ObjPoint(Vector2 initial_position);
	ObjPoint(char texture);
	ObjPoint(Vector2 initial_position, char texture);

	void render() override;
	bool check_collision_with(ObjSnake* snake);
	void randomize_new_position(ObjBoard* board, ObjSnake* snake);
};

