#pragma once
#include "vector2.h"
#ifndef ALIVE_H__
#define ALIVE_H__

class Alive {
protected:
	float maxHP;
	float currentHP;

public:
	Alive(float maxHP);
	virtual float getMaxHP() const;
	virtual float getCurrentHP() const;
	virtual void TakeDmg(float damage);
};

#endif