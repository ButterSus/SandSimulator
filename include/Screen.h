/**
 * @author ButterSss
 */

#ifndef SANDSIMULATOR_SCREEN_H
#define SANDSIMULATOR_SCREEN_H

#include "RGB.h"

namespace Screen
{
    extern RGB**pixels;
    void rescale();
    void init();
    void display();
}

#endif //SANDSIMULATOR_SCREEN_H
