/**
 * @brief Declare fly behaviour with wings.
 */
#ifndef FLY_WITH_WINGS_HPP
#define FLY_WITH_WINGS_HPP

#include "IFlyBehaviour.hpp"

class FlyWithWings final : public IFlyBehaviour
{
public:
    FlyWithWings() = default;
    ~FlyWithWings() = default;

    FlyWithWings(const FlyWithWings &) = delete;
    FlyWithWings &operator=(const FlyWithWings &) = delete;

    void fly() override;
};

#endif  // FLY_WITH_WINGS_HPP