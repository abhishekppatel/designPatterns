/**
 * @brief Declare DecoyDuck class.
 */

#ifndef DECOY_DUCK_HPP
#define DECOY_DUCK_HPP

#include "Duck.hpp"

class DecoyDuck final : public Duck
{
public:
    DecoyDuck();
    ~DecoyDuck() = default;

    DecoyDuck(const DecoyDuck &) = delete;
    DecoyDuck &operator=(const DecoyDuck &) = delete;

    void display() override;
};

#endif  // DECOY_DUCK_HPP