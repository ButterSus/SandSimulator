/**
 * @author Bruh Games Team
 */

#include <GL/freeglut.h>
#include <vector>
#include "element.h"
#include "defines.h"

extern std::vector<Element> world;

/**
 * @def
 * this function handles all render processes
 */
void render()
{
    glClearColor(BACKGROUND_R/255.0f, BACKGROUND_G/255.0f, BACKGROUND_B/255.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    for(Element element : world)
    {
        switch(element.type)
        {
            case blockBrick:{
                glBegin(GL_POINTS);
                glColor3f(1.0f, 0.0f, 0.0f);
                glVertex2i(element.x, element.y);
                glEnd();
                break;
            }
        }
    }
    glutSwapBuffers();
}
