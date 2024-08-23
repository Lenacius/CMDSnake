#pragma once
#include "GameObject.h"
#include "Vector2.h"
#include "Renderer.h"
#include <vector>

using namespace std;

class ObjSnake : public GameObject {
private:
	const int INITIAL_SIZE = 3;
	const Vector2 DEFAULT_INITIAL_POSITION = { 5, 5 };

	vector<Vector2> body;
	Vector2* head;

public:
	ObjSnake();
	ObjSnake(Vector2 initial_position);
	ObjSnake(char texture);
	ObjSnake(Vector2 initial_position, char texture);

	void render() override;
};