#include <iostream>
#include "Alive.h"

Alive::Alive(float maxHP) : maxHP(maxHP), currentHP(maxHP)
{

}

float Alive::getMaxHP() const
{
	return maxHP;
}

float Alive::getCurrentHP() const
{
	return currentHP;
}

void Alive::TakeDmg(float damage)
{
	current -= damage;
	if (currentHP < 0) {
		currentHP = 0;
	}
}