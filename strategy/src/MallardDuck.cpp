/**
 * @brief Implement MallardDuck class.
 */

#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include <iostream>
#include <memory>

MallardDuck::MallardDuck()
{
    mFlyBehaviour = std::make_unique<FlyWithWings>();
    mQuackBehaviour = std::make_unique<Quack>();
}

void MallardDuck::display()
{
    std::cout << "Mr. Mallard here." << std::endl;
}
