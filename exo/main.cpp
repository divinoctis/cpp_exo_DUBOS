#include <iostream>
#include "Vector2.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

int main() {
    staticObject staticObj(1, 2);
    std::cout << std::endl;

    breakableObject breakObj(1, 2, 3);
    breakObj.TakeDmg(1); 
    breakaObj.TakeDmg(2);
    std::cout << std::endl;

    Vector2 Vec(1, 0);
    Vec->SetX(40);
    Vec->SetY(40);
    std::cout << Vec->GetX() << std::endl;
    std::cout << Vec->GetY() << std::endl;

    Mob mob(5, 1, 5, Vector2(2, 2));
    mob.SetMove();
    mob.TakeDmg(5);
    std::cout << std::endl;

    Vector2 playerDirection(0, 1);
    Player player(8, 1, 4, Vector2(3, 3));
    player.SetMove();
    player.TakeDmg(10);
    player.attack(&breakObj);
    std::cout << std::endl;

    World* world = new World();

    std::cout << std::endl;
    std::cout << std::endl;

    world->Step();

    return 0;
}