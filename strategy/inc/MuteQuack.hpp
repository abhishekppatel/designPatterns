/**
 * @brief Declare MuteQuack class.
 */

#ifndef MUTE_QUACK_HPP
#define MUTE_QUACK_HPP

#include "IQuackBehaviour.hpp"

class MuteQuack final : public IQuackBehaviour
{
public:
    MuteQuack() = default;
    ~MuteQuack() = default;

    MuteQuack(const MuteQuack &) = delete;
    MuteQuack &operator=(const MuteQuack &) = delete;

    void quack() override;
};

#endif  // MUTE_QUACK_HPP