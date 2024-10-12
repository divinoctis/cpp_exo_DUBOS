#pragma once
#ifndef ENTITY_H__
#define ENTITY_H__
#include "vector2.h"

class Entity {
protected:
	Vector2 position;

public:
	Entity(const Vector2& position);
	virtual void SetPos(const Vector2& position);
	virtual Vector2 GetPos() const;
};

#endif