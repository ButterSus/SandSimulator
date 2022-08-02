/**
 * @author ButterSss
 */

#include "Keyboard.h"
#include "Game.h"
#include "Screen.h"
#include <GL/freeglut.h>

namespace Keyboard
{
    void init()
    {
        glutKeyboardFunc(handle);
    }

    void handle(unsigned char key, int x, int y)
    {
        printf("ok");
        switch (key)
        {
            case 'q':
            {
                Game::settings.scale -= 0.1f;
                Screen::rescale();
                break;
            }
            case 'e':
            {
                Game::settings.scale += 0.1f;
                Screen::rescale();
                break;
            }
            case 'w':
            {
                printf("ok");
                Screen::pixels[0][0] = RGB(255, 0, 0);
                break;
            }
        }
    }
}
