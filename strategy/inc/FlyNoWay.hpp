/**
 * @brief Delare fly behaviour no way.
 */

#ifndef FLY_NO_WAY_HPP
#define FLY_NO_WAY_HPP

#include "IFlyBehaviour.hpp"

class FlyNoWay final : public IFlyBehaviour
{
public:
    FlyNoWay() = default;
    ~FlyNoWay() = default;

    FlyNoWay(const FlyNoWay &) = delete;
    FlyNoWay &operator=(const FlyNoWay &) = delete;

    void fly() override;
};

#endif  // FLY_NO_WAY_HPP