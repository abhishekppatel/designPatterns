/**
 *  @brief Define class for displaying heat index.
 */

#include "HeatIndexDisplay.hpp"
#include <iomanip>
#include <iostream>

HeatIndexDisplay::HeatIndexDisplay(WeatherData &weatherData) : mWeatherData(weatherData)
{
    mWeatherData.registerObserver(this);
}

void HeatIndexDisplay::update()
{
    mHeatIndex = computeHeatIndex(mWeatherData.getTemperature(), mWeatherData.getHumidity());
    display();
}

void HeatIndexDisplay::display()
{
    std::cout << std::fixed << std::setprecision(5) << "Heat index is " << mHeatIndex << std::endl;
}

float HeatIndexDisplay::computeHeatIndex(float t, float rh)
{
    auto heatIndex{static_cast<float>(
        (16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) + (0.00941695 * (t * t)) +
         (0.00728898 * (rh * rh)) + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh)) +
         (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t)) + (0.0000291583 * (rh * rh * rh)) +
         (0.00000142721 * (t * t * t * rh)) + (0.000000197483 * (t * rh * rh * rh)) -
         (0.0000000218429 * (t * t * t * rh * rh)) + 0.000000000843296 * (t * t * rh * rh * rh)) -
        (0.0000000000481975 * (t * t * t * rh * rh * rh)))};
    return heatIndex;
}
