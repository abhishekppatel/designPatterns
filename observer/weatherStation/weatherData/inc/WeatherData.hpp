/**
 * @brief Declare WeatherData class.
 */

#ifndef WEATHER_DATA_HPP
#define WEATHER_DATA_HPP

#include "IObserver.hpp"
#include "ISubject.hpp"

class WeatherData : public ISubject
{
public:
    void registerObserver(IObserver observer) override;
    void removeObserver(IObserver observer) override;
    void notifyObserver() override;

    float getTemperature();
    float getHumidity();
    float getPressure();

    void measurementsChanged();

    void setMeasurements(float temperature, float humidity, float pressure);

private:
    float mTemperature{};
    float mHumidity{};
    float mPressure{};
};

#endif  // WEATHER_DATA_HPP
