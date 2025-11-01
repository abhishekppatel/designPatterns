/**
 * @brief Declare the Duck Class.
 */

#ifndef DUCK_HPP
#define DUCK_HPP

#include "IFlyBehaviour.hpp"
#include "IQuackBehaviour.hpp"
#include <memory>

class Duck
{
public:
    Duck() = default;
    virtual ~Duck() = default;

    Duck(const Duck &) = delete;
    Duck &operator=(const Duck &) = delete;

    virtual void display() = 0;

    void swim();

    void performQuack();

    void performFly();

    void setFlyBehaviour(std::unique_ptr<IFlyBehaviour> flyBehaviour);

    void setQuackBehaviour(std::unique_ptr<IQuackBehaviour> quackBehaviour);

protected:
    std::unique_ptr<IFlyBehaviour> mFlyBehaviour{nullptr};
    std::unique_ptr<IQuackBehaviour> mQuackBehaviour{nullptr};
};

#endif  // DUCK_HPP