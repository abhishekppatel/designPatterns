/**
 * @brief Declare a class for displaying forecast.
 */

#ifndef FORECAST_DISPLAY_HPP
#define FORECAST_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"

class ForecastDisplay final : public IObserver, public IDisplayElement
{
public:
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif  // FORECAST_DISPLAY_HPP