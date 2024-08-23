#pragma once

class GameObject {
public:
	char texture = '*';

	virtual void render() = 0;
	virtual void update() {}; //empty implementation
};