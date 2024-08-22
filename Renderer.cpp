#include "Renderer.h"

void Renderer::render_at_position(int x, int y, char symbol) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	cout << symbol;
}