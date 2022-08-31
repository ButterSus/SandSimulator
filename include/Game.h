/**
 * @author ButterSss
 */

#ifndef SANDSIMULATOR_GAME_H
#define SANDSIMULATOR_GAME_H

#include <string>
#include "Block.h"
#include "RGB.h"

using std::string;

namespace Game
{
    extern Block**world;

    struct Settings {
        int height;
        int width;
        string title;
        RGB background_color;
    } extern settings;

    void init(int*argc, char*argv[]);
    void mainloop();
}

#endif //SANDSIMULATOR_GAME_H
