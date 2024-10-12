#pragma once
#include "entity.h"
#include "alive.h"
#include "AMovable.h"
#ifndef MOB_H__
#define MOB_H__

class Mob : public Entity, public Alive, public AMovable
{
public:
	Mob(float x, float y, float maxHP,const Vector2& direction);

	void TakeDmg(float damage) override;
	void SetMove() override;
};

#endif