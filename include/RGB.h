/**
 * @author ButterSss
 */

#ifndef SANDSIMULATOR_COLOR_H
#define SANDSIMULATOR_COLOR_H

#include <cstdint>

union RGB {
    uint32_t value : 24 = 0;
    struct {
        uint8_t red, green, blue;
    };

    RGB() = default;

    RGB(uint8_t red, uint8_t green, uint8_t blue)
    {
        this->red = red;
        this->green = green;
        this->blue = blue;
    }

    explicit RGB(uint32_t value)
    {
        this->value = value;
    }
};

#endif //SANDSIMULATOR_COLOR_H
