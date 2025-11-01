/**
 * @brief Interface for Fly behaviour.
 */

#ifndef I_FLY_BEHAVIOUR_HPP
#define I_FLY_BEHAVIOUR_HPP

class IFlyBehaviour
{
public:
    IFlyBehaviour() = default;
    virtual ~IFlyBehaviour() = default;

    IFlyBehaviour(const IFlyBehaviour &) = delete;
    IFlyBehaviour &operator=(const IFlyBehaviour &) = delete;

    virtual void fly() = 0;
};

#endif  // I_FLY_BEHAVIOUR_HPP