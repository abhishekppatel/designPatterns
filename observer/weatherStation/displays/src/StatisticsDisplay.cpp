/**
 *  @brief Define class for displaying statistics.
 */

#include "StatisticsDisplay.hpp"
#include <iomanip>
#include <iostream>

StatisticsDisplay::StatisticsDisplay(WeatherData &weatherData) : mWeatherData(weatherData)
{
    mWeatherData.registerObserver(this);
}

void StatisticsDisplay::update()
{
    auto temperature{mWeatherData.getTemperature()};
    mTemperatureSum += temperature;

    mTotalReadings++;

    if (temperature > mMaximumTemperature)
    {
        mMaximumTemperature = temperature;
    }

    if (temperature < mMinumumTemperature)
    {
        mMinumumTemperature = temperature;
    }

    display();
}

void StatisticsDisplay::display()
{
    std::cout << std::fixed << std::setprecision(1)
              << "Avg/Max/Min temperature = " << (mTemperatureSum / mTotalReadings) << "/" << mMaximumTemperature << "/"
              << mMinumumTemperature << std::endl;
}
