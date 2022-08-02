/**
 * @author ButterSss
 */

#ifndef SANDSIMULATOR_GAME_H
#define SANDSIMULATOR_GAME_H

#include <string>
#include "RGB.h"

#define SCALED(x) (int(std::ceil((float)x / Game::settings.scale)))

using std::string;

namespace Game
{
    struct Settings {
        float scale;
        int height;
        int width;
        string title;
        RGB background_color;
    } extern settings;

    void init(int*argc, char*argv[]);
    void mainloop();
}

#endif //SANDSIMULATOR_GAME_H
