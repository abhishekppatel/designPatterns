/**
 * @brief Declare Quack class.
 */

#ifndef QUACK_HPP
#define QUACK_HPP

#include "IQuackBehaviour.hpp"

class Quack final : public IQuackBehaviour
{
public:
    Quack() = default;
    ~Quack() = default;

    Quack(const Quack &) = delete;
    Quack &operator=(const Quack &) = delete;

    void quack() override;
};

#endif  // QUACK_HPP