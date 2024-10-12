#include <iostream>
#include "breakableObject.h"

breakableObject::breakableObject(float x, float y, float maxHP) : Entity(Vector2(x, y)), Alive(maxHP)
{
	currentHP = maxHP;
	std::cout << "Breakable Object just created at x = " << x << " and y =" << y << " with " << this->maxHP << std::endl;
}

void breakableObject::TakeDmg(float damage) {
	Alive::TakeDmg(damage);

	if (currentHP == 0)
	{
		std::cout << "Breakable Object just broke." << std::endl;
	}
		
}