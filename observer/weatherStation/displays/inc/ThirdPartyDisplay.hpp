/**
 * @brief Declare a class for third party display.
 */

#ifndef THIRD_PARTY_DISPLAY_HPP
#define THIRD_PARTY_DISPLAY_HPP

#include "IDisplayElement.hpp"
#include "IObserver.hpp"

class ThirdPartyDisplay final : public IObserver, public IDisplayElement
{
public:
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif  // THIRD_PARTY_DISPLAY_HPP