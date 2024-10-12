#pragma once
#include "Alive.h"
#ifndef IATTACKER_H__
#define IATTACKER_H__

// Abstract class

class IAttacker {
public:
	virtual void attack(Alive* target) = 0;
};

#endif