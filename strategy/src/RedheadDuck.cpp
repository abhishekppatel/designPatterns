/**
 * @brief Implement RedheadDuck class.
 */

#include "RedheadDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include <iostream>
#include <memory>

RedheadDuck::RedheadDuck()
{
    mFlyBehaviour = std::make_unique<FlyWithWings>();
    mQuackBehaviour = std::make_unique<Quack>();
}

void RedheadDuck::display()
{
    std::cout << "Ms. Redhead here." << std::endl;
}
