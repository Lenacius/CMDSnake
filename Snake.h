#pragma once
#include "Game.h"
#include "Renderer.h"

using namespace std;

class Snake : public Game {
protected:
	void initialize() override;
	void main_loop() override;
	void finish() override;
};