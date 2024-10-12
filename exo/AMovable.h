#pragma once
#include "vector2.h"
#ifndef AMOVABLE_H__
#define AMOVABLE_H__

class AMovable {
protected:
	Vector2 direction;
	float vitesse;

public:
	AMovable(const Vector2& direction, float vitesse);
	virtual void SetDir(const Vector2& direction);
	virtual void SetSpeed(float vitesse);
	virtual void SetMove() = 0; // = 0 car virtual pur
};

#endif