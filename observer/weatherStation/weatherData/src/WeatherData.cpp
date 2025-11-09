/**
 * @brief Define WeatherData class.
 */

#include "WeatherData.hpp"

void WeatherData::registerObserver(IObserver observer) {}
void WeatherData::removeObserver(IObserver observer) {}
void WeatherData::notifyObserver() {}

float WeatherData::getTemperature()
{
    return mTemperature;
}
float WeatherData::getHumidity()
{
    return mHumidity;
}
float WeatherData::getPressure()
{
    return mPressure;
}

void WeatherData::measurementsChanged()
{
    notifyObserver();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    mTemperature = temperature;
    mHumidity = humidity;
    mPressure = pressure;
    measurementsChanged();
}