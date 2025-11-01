/**
 * @brief Declare Squeak class.
 */

#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include "IQuackBehaviour.hpp"

class Squeak final : public IQuackBehaviour
{
public:
    Squeak() = default;
    ~Squeak() = default;

    Squeak(const Squeak &) = delete;
    Squeak &operator=(const Squeak &) = delete;

    void quack() override;
};

#endif  // SQUEAK_HPP