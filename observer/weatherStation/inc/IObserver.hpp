/**
 * @brief Interface for Observer in the Observer Pattern.
 */

#ifndef IOBSERVER_HPP
#define IOBSERVER_HPP

class IObserver
{
public:
    virtual void update(float temperature, float humidity, float pressure);
};

#endif  // IOBSERVER_HPP