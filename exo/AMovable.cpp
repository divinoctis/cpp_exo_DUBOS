#include<iostream>
#include "AMovable.h"

AMovable::AMovable(const Vector2& direction, float vitesse) : direction(direction), vitesse(direction)
{

}

void AMovable::SetDir(const Vector2& direction)
{
	this->direction = direction;
}

void AMovable::SetSpeed(float vitesse)
{
	this->vitesse = vitesse;
}