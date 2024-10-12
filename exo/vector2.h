#pragma once
#ifndef VECTOR_H__
#define VECTOR_H__

class Vector2
{
private:
	float x;
	float y;

public:
	Vector2(float, float);
	float getX();
	float getY();

	void set(float x, float y);

};

#endif