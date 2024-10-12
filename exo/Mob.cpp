#include <iostream>
#include "Mob.h"

Mob::Mob(float x, float y, float maxHP, const Vector2& direction) : Entity(Vector2(x, y)), Alive(maxHP), AMovable(direction, 0.0f) {
    currentHealth = maxHealth;
    std::cout << "Mob just created at x = " << x << " and y = " << y << " with " << maxHP << " life with direction x = " << direction.getX() << " and y = " << direction.getY() << std::endl;
}

void Mob::TakeDmg(float damage) {
    Alive::takeDamage(damage);
    if (currentHealth == 0) {
        std::cout << "Mob just die" << std::endl;
    }
}

void Mob::SetMove() {
    AMovable::move();
    std::cout << "Mob move to x = " << direction.getX() << " and y = " << direction.getY() << std::endl;
}