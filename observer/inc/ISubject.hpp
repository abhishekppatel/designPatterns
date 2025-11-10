/**
 * @brief Interface for Subject in the Observer Pattern.
 */

#ifndef ISUBJECT_HPP
#define ISUBJECT_HPP

class IObserver;

class ISubject
{
public:
    virtual void registerObserver(IObserver *observer) = 0;
    virtual void removeObserver(IObserver *observer) = 0;
    virtual void notifyObserver() = 0;
};

#endif  // ISUBJECT_HPP