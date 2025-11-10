/**
 *  @brief Define class for displaying forecast.
 */

#include "ForecastDisplay.hpp"
#include <iostream>

ForecastDisplay::ForecastDisplay(WeatherData &weatherData) : mWeatherData(weatherData)
{
    mWeatherData.registerObserver(this);
}

void ForecastDisplay::update()
{
    mLastPressure = mCurrentPressure;
    mCurrentPressure = mWeatherData.getPressure();

    display();
}

void ForecastDisplay::display()
{
    std::cout << "Forecast: ";

    if (mCurrentPressure > mLastPressure)
    {
        std::cout << "Improving weather on the way!" << std::endl;
    }
    else if (mCurrentPressure == mLastPressure)
    {
        std::cout << "More of the same" << std::endl;
    }
    else if (mCurrentPressure < mLastPressure)
    {
        std::cout << "Watch out for cooler, rainy weather" << std::endl;
    }
}
