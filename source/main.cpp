/**
 * @author Bruh Games Team
 */

#include <GL/freeglut.h>
#include <vector>
#include "element.h"
#include "defines.h"

void setup();
void render();
void tick(int = 0);

std::vector<Element> world;

void click(int button, int state, int x, int y)
{
    y = WINDOW_HEIGHT - y;
    if (button != GLUT_LEFT_BUTTON) return;
    if (state != GLUT_DOWN) return;
    world.push_back((Element){x, y, blockBrick});
}

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
    glutInitDisplayMode(GLUT_RGBA);
    glutCreateWindow("SandSimulator");
    glutDisplayFunc(render);
    glutMouseFunc(click);
    setup();
    tick();
    glutMainLoop();
}
