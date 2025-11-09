/**
 * @brief Declare a class for displaying statistics.
 */

#ifndef STATISTICS_DISPLAY_H
#define STATISTICS_DISPLAY_H

#include "IDisplayElement.hpp"
#include "IObserver.hpp"

class StatisticsDisplay final : public IObserver, public IDisplayElement
{
public:
    void update(float temperature, float humidity, float pressure) override;
    void display() override;
};

#endif  // STATISTICS_DISPLAY_H