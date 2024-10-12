#include <iostream>
#include "vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y)
{

}

float Vector2::getX()
{
	return x;
}

float Vector2::getY()
{
	return y;
}

void Vector2::set(float _x, float _y)
{
	this->x = _x;
	this->y = _y;
}