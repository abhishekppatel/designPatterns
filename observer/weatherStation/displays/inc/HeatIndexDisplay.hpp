/**
 * @brief Declare a class for displaying heat index.
 */

#ifndef HEAT_INDEX_DISPLAY_HPP
#define HEAT_INDEX_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"
#include "WeatherData.hpp"

class HeatIndexDisplay final : public IObserver, public IDisplayElement
{
public:
    HeatIndexDisplay(WeatherData &weatherData);
    ~HeatIndexDisplay() = default;

    void update() override;
    void display() override;

private:
    float computeHeatIndex(float temperature, float relativeHumidity);

    WeatherData &mWeatherData;

    float mHeatIndex{0.0f};
};

#endif  // HEAT_INDEX_DISPLAY_HPP