#pragma once
#include "Game.h"
#include "Renderer.h"

using namespace std;

class Snake : public Game {
private:
	int board_size_x;
	int board_size_y;

protected:
	void initialize() override;
	void main_loop() override;
	void finish() override;
};