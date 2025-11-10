/**
 * @brief Interface for Observer in the Observer Pattern.
 */

#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

class IObserver
{
public:
    virtual void update() = 0;
};

#endif  // IOBSERVER_HPP