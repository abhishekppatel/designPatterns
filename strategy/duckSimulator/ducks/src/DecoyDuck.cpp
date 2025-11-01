/**
 * @brief Implement DecoyDuck class.
 */

#include "DecoyDuck.hpp"
#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"
#include <iostream>
#include <memory>

DecoyDuck::DecoyDuck()
{
    mFlyBehaviour = std::make_unique<FlyNoWay>();
    mQuackBehaviour = std::make_unique<MuteQuack>();
}

void DecoyDuck::display()
{
    std::cout << "Hinata here. Best Decoy ever." << std::endl;
}
