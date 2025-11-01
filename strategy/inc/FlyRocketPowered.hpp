/**
 * @brief Declare fly behaviour with rocket powered.
 */

#ifndef FLY_ROCKET_POWERED_HPP
#define FLY_ROCKET_POWERED_HPP

#include "IFlyBehaviour.hpp"

class FlyRocketPowered final : public IFlyBehaviour
{
public:
    FlyRocketPowered() = default;
    ~FlyRocketPowered() = default;

    FlyRocketPowered(const FlyRocketPowered &) = delete;
    FlyRocketPowered &operator=(const FlyRocketPowered &) = delete;

    void fly() override;
};

#endif  // FLY_ROCKET_POWERED_HPP
