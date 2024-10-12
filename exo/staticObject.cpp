#include <iostream>
#include "staticObject.h"


staticObject::staticObject(float x, float y) : Entity(Vector2(x, y)) {
    std::cout << "Static Object just created at x = " << x << " and y = " << y << std::endl;
}