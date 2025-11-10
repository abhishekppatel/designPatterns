/**
 * @brief Declare a class for displaying statistics.
 */

#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "IDisplayElement.hpp"
#include "IObserver.hpp"
#include "WeatherData.hpp"

class StatisticsDisplay final : public IObserver, public IDisplayElement
{
public:
    StatisticsDisplay(WeatherData &weatherData);
    ~StatisticsDisplay() = default;

    void update() override;
    void display() override;

private:
    WeatherData &mWeatherData;

    float mMaximumTemperature{0.0f};
    float mMinumumTemperature{200.0f};
    float mTemperatureSum{0.0f};
    float mTotalReadings{};
};

#endif  // STATISTICS_DISPLAY_H