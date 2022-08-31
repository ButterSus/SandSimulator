/**
 * @author ButterSss
 */

#include "Block.h"
#include "Screen.h"
#include "Game.h"
#include <GL/glut.h>

namespace Screen
{
    void init() {
        glutInitDisplayMode(GLUT_RGBA);
        glutInitWindowSize(Game::settings.width, Game::settings.height);
        glutCreateWindow(Game::settings.title.c_str());
        glutDisplayFunc(display);
        glTranslatef(-1.0f, -1.0f, 0.0f);
        glScalef(2.0f / (float)Game::settings.width, 2.0f / (float)Game::settings.height, 1.0f);
    }

    void display()
    {
        glClearColor(255.0f / Game::settings.background_color.red, 255.0f / Game::settings.background_color.green,
                     255.0f / Game::settings.background_color.blue, 0.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        for (int y = 0; y < Game::settings.height; y++)
        {
            for (int x = 0; x < Game::settings.width; x++)
            {
                BlockRenderFunctions[Game::world[y][x].type](y, x, Game::world[y][x].param);
            }
        }
        glutSwapBuffers();
    }
}
