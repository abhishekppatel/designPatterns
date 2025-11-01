/**
 * @brief Implement the Duck Application.
 */

#include "DecoyDuck.hpp"
#include "Duck.hpp"
#include "FlyRocketPowered.hpp"
#include "MallardDuck.hpp"
#include "MuteQuack.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"
#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<Duck> mallardDuck = std::make_unique<MallardDuck>();
    mallardDuck->display();
    mallardDuck->swim();
    mallardDuck->performFly();
    mallardDuck->performQuack();

    std::unique_ptr<Duck> redheadDuck = std::make_unique<RedheadDuck>();
    redheadDuck->display();
    redheadDuck->performFly();
    redheadDuck->performQuack();

    std::unique_ptr<Duck> decoyDuck = std::make_unique<DecoyDuck>();
    decoyDuck->display();
    decoyDuck->performFly();
    decoyDuck->performQuack();

    std::unique_ptr<Duck> rubberDuck = std::make_unique<RubberDuck>();
    rubberDuck->display();
    rubberDuck->performFly();
    rubberDuck->performQuack();

    rubberDuck->setFlyBehaviour(std::make_unique<FlyRocketPowered>());
    rubberDuck->setQuackBehaviour(std::make_unique<MuteQuack>());
    rubberDuck->performFly();
    rubberDuck->performQuack();

    return 0;
}