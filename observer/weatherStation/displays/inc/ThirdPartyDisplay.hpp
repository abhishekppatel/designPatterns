/**
 * @brief Declare a class for third party display.
 */

#ifndef THIRD_PARTY_DISPLAY_HPP
#define THIRD_PARTY_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"
#include "WeatherData.hpp"

class ThirdPartyDisplay final : public IObserver, public IDisplayElement
{
public:
    ThirdPartyDisplay(WeatherData &weatherData);
    ~ThirdPartyDisplay();

    void update() override;
    void display() override;

private:
    WeatherData &mWeatherData;
};

#endif  // THIRD_PARTY_DISPLAY_HPP