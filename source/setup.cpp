/**
 * @author Bruh Games Team
 */

#include <GL/freeglut.h>
#include "defines.h"

void setup()
{
    glTranslatef(-1.0f, -1.0f, 0.0f);
    glScalef(2.0f / WINDOW_WIDTH, 2.0f / WINDOW_HEIGHT, 1.0f);
}
