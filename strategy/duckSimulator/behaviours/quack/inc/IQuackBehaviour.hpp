/**
 * @brief Interface for Quack behaviour.
 */

#ifndef I_QUACK_BEHAVIOUR_HPP
#define I_QUACK_BEHAVIOUR_HPP

class IQuackBehaviour
{
public:
    IQuackBehaviour() = default;
    virtual ~IQuackBehaviour() = default;

    IQuackBehaviour(const IQuackBehaviour &) = delete;
    IQuackBehaviour &operator=(const IQuackBehaviour &) = delete;

    virtual void quack() = 0;
};

#endif  // I_QUACK_BEHAVIOUR_HPP
