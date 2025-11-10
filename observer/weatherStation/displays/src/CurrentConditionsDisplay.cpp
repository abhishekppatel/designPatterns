/**
 *  @brief Define class for displaying current conditions.
 */

#include "CurrentConditionsDisplay.hpp"
#include <iomanip>
#include <iostream>

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData &weatherData) : mWeatherData(weatherData)
{
    mWeatherData.registerObserver(this);
}

void CurrentConditionsDisplay::update()
{
    mTemperature = mWeatherData.getTemperature();
    mHumidity = mWeatherData.getHumidity();
    display();
}

void CurrentConditionsDisplay::display()
{
    std::cout << std::fixed << std::setprecision(1) << "Current conditions: " << mTemperature << "F degrees and "
              << mHumidity << "% humidity" << std::endl;
}
