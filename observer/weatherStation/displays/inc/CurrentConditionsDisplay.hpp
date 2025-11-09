/**
 * @brief Declare a class for displaying current conditions.
 */

#ifndef CURRENT_CONDITIONS_DISPLAY_HPP
#define CURRENT_CONDITIONS_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"

class CurrentConditionsDisplay final : public IObserver, public IDisplayElement
{
public:
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif  // CURRENT_CONDITIONS_DISPLAY_HPP