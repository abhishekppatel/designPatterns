/**
 * @brief Declare RedheadDuck class.
 */

#ifndef REDHEAD_DUCK_HPP
#define REDHEAD_DUCK_HPP

#include "Duck.hpp"

class RedheadDuck final : public Duck
{
public:
    RedheadDuck();
    ~RedheadDuck() = default;

    RedheadDuck(const RedheadDuck &) = delete;
    RedheadDuck &operator=(const RedheadDuck &) = delete;

    void display() override;
};

#endif  // REDHEAD_DUCK_HPP