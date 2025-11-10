/**
 * @brief Declare a class for displaying current conditions.
 */

#ifndef CURRENT_CONDITIONS_DISPLAY_HPP
#define CURRENT_CONDITIONS_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"
#include "WeatherData.hpp"

class CurrentConditionsDisplay final : public IObserver, public IDisplayElement
{
public:
    CurrentConditionsDisplay(WeatherData &weatherData);
    CurrentConditionsDisplay() = default;

    void update() override;
    void display() override;

private:
    WeatherData &mWeatherData;

    float mTemperature{};
    float mHumidity{};
};

#endif  // CURRENT_CONDITIONS_DISPLAY_HPP