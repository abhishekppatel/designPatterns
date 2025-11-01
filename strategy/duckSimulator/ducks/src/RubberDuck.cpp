/**
 * @brief Implement RubberDuck class.
 */

#include "RubberDuck.hpp"
#include "FlyNoWay.hpp"
#include "Squeak.hpp"
#include <iostream>
#include <memory>

RubberDuck::RubberDuck()
{
    mFlyBehaviour = std::make_unique<FlyNoWay>();
    mQuackBehaviour = std::make_unique<Squeak>();
}

void RubberDuck::display()
{
    std::cout << "Luffy here. I am made of Rubber." << std::endl;
}
