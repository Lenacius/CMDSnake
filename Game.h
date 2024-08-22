#pragma once

enum GameStatus {
	BEGIN,
	OPEN,
	END
};

class Game {
protected:
	GameStatus game_status = GameStatus::BEGIN;

	virtual void initialize() = 0;
	virtual void main_loop() = 0;
	virtual void finish() = 0;

public:
	void run();
};