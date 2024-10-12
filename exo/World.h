#ifndef WORLD_H
#define WORLD_H

#include "Entity.h"
#include "staticObject.h"
#include "breakableObject.h"
#include "Mob.h"
#include "Player.h"
#include <vector>

class World {
public:
	World();
	void Step();
	bool IsMobAlive();
	bool IsBOAlive();

	std::vector<Entity*> ent;

};

#endif
