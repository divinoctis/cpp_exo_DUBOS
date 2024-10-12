#include <iostream>
#include "entity.h"

Entity::Entity(const Vector2& position) : position(position)
{

}

void Entity::SetPos(const Vector2& position)
{
	this->position = position;
}

float Entity::GetPos() const
{
	return position;
}