/**
 * @brief Declare MallardDuck class.
 */

#ifndef MALLARD_DUCK_HPP
#define MALLARD_DUCK_HPP

#include "Duck.hpp"

class MallardDuck final : public Duck
{
public:
    MallardDuck();
    ~MallardDuck() = default;

    MallardDuck(const MallardDuck &) = delete;
    MallardDuck &operator=(const MallardDuck &) = delete;

    void display() override;
};

#endif  // MALLARD_DUCK_HPP