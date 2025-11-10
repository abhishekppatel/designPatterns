/**
 * @brief Declare a class for displaying forecast.
 */

#ifndef FORECAST_DISPLAY_HPP
#define FORECAST_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"
#include "WeatherData.hpp"

class ForecastDisplay final : public IObserver, public IDisplayElement
{
public:
    ForecastDisplay(WeatherData &weatherData);
    ~ForecastDisplay() = default;

    void update() override;
    void display() override;

private:
    WeatherData &mWeatherData;

    float mLastPressure{};
    float mCurrentPressure{29.92f};
};

#endif  // FORECAST_DISPLAY_HPP