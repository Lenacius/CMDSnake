#pragma once
#include "Game.h"
#include "Renderer.h"
#include "Vector2.h"
#include "ObjBoard.h"
#include "ObjSnake.h"
#include "ObjPoint.h"
#include <conio.h>

using namespace std;

class Snake : public Game {
private:
	ObjBoard* board;
	ObjSnake* snake;
	ObjPoint* point;
	const int GAME_SPEED = 250;

protected:
	void initialize() override;
	void main_loop() override;
	void capture_input() override;
	void finish() override;

public:
	Snake();
};