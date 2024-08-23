#pragma once
#include "Game.h"
#include "Renderer.h"

using namespace std;

struct Vector2 {
	int x;
	int y;
	Vector2() {
		x = 0;
		y = 0;
	}
	Vector2(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

class Snake : public Game {
private:
	Vector2 board_size;
	Vector2 _snake;

protected:
	void initialize() override;
	void main_loop() override;
	void finish() override;

public:
	Snake();
};