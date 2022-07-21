/**
 * @author Bruh Games Team
 */

#include <GL/freeglut.h>
#include "defines.h"

/**
 * @def
 * this function handles all physics
 */
void tick(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000 / FPS, tick, 0);
}
