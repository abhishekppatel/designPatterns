/**
 *  @brief Define class for third party display.
 */

#include "ThirdPartyDisplay.hpp"
#include <iostream>

void ThirdPartyDisplay::update(float temperature, float humidity, float pressure) {}

void ThirdPartyDisplay::display()
{
    std::cout << "ThirdPartyDisplay" << std::endl;
}
