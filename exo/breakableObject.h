#pragma once
#include "entity.h"
#include "alive.h"
#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__

class breakableObject : public Entity, public Alive
{
public:
	breakableObject(float x, float y, float maxHP);

	void TakeDmg(float damage) override;
};

#endif
