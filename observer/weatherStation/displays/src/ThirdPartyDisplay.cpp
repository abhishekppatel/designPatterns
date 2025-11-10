/**
 *  @brief Define class for third party display.
 */

#include "ThirdPartyDisplay.hpp"
#include <iostream>

ThirdPartyDisplay::ThirdPartyDisplay(WeatherData &weatherData) : mWeatherData(weatherData) {}

void ThirdPartyDisplay::update()
{
    display();
}

void ThirdPartyDisplay::display()
{
    std::cout << "ThirdPartyDisplay" << std::endl;
}
