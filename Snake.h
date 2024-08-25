#pragma once
#include "Game.h"
#include "Renderer.h"
#include "Vector2.h"
#include "ObjBoard.h"
#include "ObjSnake.h"
#include <conio.h>

using namespace std;

class Snake : public Game {
private:
	GameObject* board;
	GameObject* snake;

protected:
	void initialize() override;
	void main_loop() override;
	void capture_input() override;
	void finish() override;

public:
	Snake();
};