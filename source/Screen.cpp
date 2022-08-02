/**
 * @author ButterSss
 */

#include "Screen.h"
#include "Game.h"
#include <GL/glut.h>
#include <cmath>

namespace Screen
{
    RGB**pixels;

    void rescale(float x, float y)
    {
        RGB**trash = pixels;
        pixels = new RGB*[SCALED(Game::settings.height)];
        for (int i = 0; i < SCALED(Game::settings.height); i++)
        {
            pixels[i] = new RGB[SCALED(Game::settings.width)];
            for (int j = 0; j < SCALED(Game::settings.width); j++)
            {
                pixels[i][j] = trash[i][j];
            }
        }

        glutPostRedisplay();
    }

    void init() {
        pixels = new RGB *[SCALED(Game::settings.height)];
        for (int i = 0; i < SCALED(Game::settings.height); i++)
        {
            pixels[i] = new RGB[SCALED(Game::settings.width)];
            for (int j = 0; j < SCALED(Game::settings.width); j++)
            {
                pixels[i][j] = Game::settings.background_color;
            }
        }
        glutInitDisplayMode(GLUT_RGBA);
        glutInitWindowSize(Game::settings.width, Game::settings.height);
        glutCreateWindow(Game::settings.title.c_str());
        glutDisplayFunc(display);
        glTranslatef(-1.0f, -1.0f, 0.0f);
        glScalef(2.0f / (float)Game::settings.width, 2.0f / (float)Game::settings.height, 1.0f);
    }

    void display()
    {
        glBegin(GL_QUADS);
        for (int y = 0; y < SCALED(Game::settings.height); y++)
        {
            for (int x = 0; x < SCALED(Game::settings.width); x++)
            {
                glColor3f(pixels[y][x].red, pixels[y][x].green, pixels[y][x].blue);
                glVertex2i(int((float)x * Game::settings.scale), int((float)y * Game::settings.scale));
                glVertex2i(int((float)(x + 1) * Game::settings.scale), int((float)y * Game::settings.scale));
                glVertex2i(int((float)(x + 1) * Game::settings.scale), int((float)(y + 1) * Game::settings.scale));
                glVertex2i(int((float)x * Game::settings.scale), int((float)(y + 1) * Game::settings.scale));
            }
        }
        glEnd();
        glutSwapBuffers();
    }
}
