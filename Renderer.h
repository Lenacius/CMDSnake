#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

class Renderer {
public:
	static void render_at_position(int x, int y, char symbol);
};