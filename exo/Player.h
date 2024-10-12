#pragma once
#include "entity.h"
#include "alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
	Player(float x, float y, float maxHP, const Vector2& direction);
	void TakeDmg(float damage) override;
	void SetMove() override;
	void attack(Alive* target) override; // set à 10
};