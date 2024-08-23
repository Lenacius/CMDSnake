#pragma once
#include "GameObject.h"
#include "Vector2.h"
#include "Renderer.h"

class ObjBoard : public GameObject {
private:
	Vector2 dimensions;

public:
	ObjBoard();
	ObjBoard(Vector2 dimensions);
	ObjBoard(Vector2 dimensions, char texture);

	void render() override;
};