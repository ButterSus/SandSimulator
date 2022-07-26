/**
 * @author ButterSss
 */

#include "Game.h"
#include "Screen.h"
#include "Keyboard.h"
#include "Block.h"
#include "RGB.h"

namespace Game
{
    Block**world;

    Settings settings = {
            .height = 720,
            .width = 720,
            .title = "undefined",
            .background_color = RGB(255, 255, 255)
    };

    void init(int*argc, char*argv[])
    {
        glutInit(argc, argv);
    }

    void mainloop()
    {
        Screen::init();
        Keyboard::init();
        glutMainLoop();
    }
}
