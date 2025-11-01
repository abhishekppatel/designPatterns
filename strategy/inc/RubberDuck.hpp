/**
 * @brief Declare RubberDuck class.
 */

#ifndef RUBBER_DUCK_HPP
#define RUBBER_DUCK_HPP

#include "Duck.hpp"

class RubberDuck final : public Duck
{
public:
    RubberDuck();
    ~RubberDuck() = default;

    RubberDuck(const RubberDuck &) = delete;
    RubberDuck &operator=(const RubberDuck &) = delete;

    void display() override;
};

#endif  // RUBBER_DUCK_HPP