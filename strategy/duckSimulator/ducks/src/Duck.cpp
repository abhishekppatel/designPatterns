/**
 * @brief Implementation of the Duck Class.
 */

#include "Duck.hpp"
#include <iostream>

void Duck::swim()
{
    std::cout << "I am swimming." << std::endl;
}

void Duck::performQuack()
{
    mQuackBehaviour->quack();
}

void Duck::performFly()
{
    mFlyBehaviour->fly();
}

void Duck::setFlyBehaviour(std::unique_ptr<IFlyBehaviour> flyBehaviour)
{
    mFlyBehaviour = std::move(flyBehaviour);
}

void Duck::setQuackBehaviour(std::unique_ptr<IQuackBehaviour> quackBehaviour)
{
    mQuackBehaviour = std::move(quackBehaviour);
}
