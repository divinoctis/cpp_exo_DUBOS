#include <iostream>
#include "Player.h"

Player::Player(float x, float y, float maxHP, const Vector2& direction) : Entity(Vector2(x, y)), Alive(maxHP), AMovable(direction, 0.0f) {
    currentHealth = maxHealth;
    std::cout << "Player just created at x = " << x << " and y = " << y << " with " << maxHP << " life with direction x = " << direction.getX() << " and y = " << direction.getY() << std::endl;
}

void Player::TakeDmg(float damage) {
    Alive::takeDamage(damage);
    if (currentHealth == 0) {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::SetMove() {
    AMovable::move();
    std::cout << "Player moved to x = " << direction.getX() << " and y = " << direction.getY() << std::endl;
}

void Player::attack(Alive* target) {
    if (target) {
        target->takeDamage(10);
        std::cout << "Player just attacked." << std::endl;
    }
}