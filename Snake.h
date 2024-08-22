#pragma once
#include "Game.h"

class Snake : public Game {
protected:
	void initialize() override;
	void main_loop() override;
	void finish() override;
};