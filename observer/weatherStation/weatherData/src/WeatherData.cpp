/**
 * @brief Define WeatherData class.
 */

#include "WeatherData.hpp"
#include <cassert>

void WeatherData::registerObserver(IObserver *observer)
{
    mObservers.push_back(observer);
}

void WeatherData::removeObserver(IObserver *observer)
{
    mObservers.remove(observer);
}

void WeatherData::notifyObserver()
{
    for (auto observer: mObservers)
    {
        assert(observer != nullptr);
        observer->update();
    }
}

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