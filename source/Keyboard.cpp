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

    }
}
