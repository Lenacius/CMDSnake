#pragma once

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
	friend bool operator==(const Vector2& val1, const Vector2& val2) {
		return (val1.x == val2.x
				and val1.y == val2.y);
	}
	friend bool operator!=(const Vector2& val1, const Vector2& val2) {
		return !(val1 == val2);
	}
};