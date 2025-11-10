/**
 * @brief Implement the Weather Station Application.
 */

#include "CurrentConditionsDisplay.hpp"
#include "ForecastDisplay.hpp"
#include "HeatIndexDisplay.hpp"
#include "StatisticsDisplay.hpp"
#include "WeatherData.hpp"
#include <iostream>

int main()
{
    WeatherData weatherData;
    CurrentConditionsDisplay currentDisplay(weatherData);
    StatisticsDisplay statisticsDisplay(weatherData);
    ForecastDisplay forecastDisplay(weatherData);
    HeatIndexDisplay heatIndexDisplay(weatherData);

    weatherData.setMeasurements(80.0f, 65.0f, 30.4f);
    weatherData.setMeasurements(82.0f, 70.0f, 29.2f);
    weatherData.setMeasurements(78.0f, 90.0f, 29.2f);

    return 0;
}