/**
* @author ButterSss
*/

#include "Game.h"

int main(int argc, char*argv[])
{
    Game::init(&argc, argv);
    Game::mainloop();
}

//#include <iostream>
//#include <array>
//#include <GL/freeglut.h>
//#include "defines.h"
//
//#define RGB(r, g, b) (b * 0x10000 + g * 0x100 + r * 0x1)
//
//int previousX, previousY;
//
//template <std::size_t height, std::size_t width, class type>
//constexpr auto filled_array(std::array<std::array<type, width>, height> value, type element)
//{
//    for (int y = 0; y < height; y++)
//    {
//        for (int x = 0; x < width; x++)
//        {
//            value[y][x] = element;
//        }
//    }
//    return value;
//}
//
//enum BlockTypes {
//    air,
//    brick,
//    sand
//};
//
//typedef struct {
//    BlockTypes type;
//    size_t any;
//} Block;
//
//typedef union {
//    size_t value;
//    struct {
//        uint8_t r, g, b;
//    };
//} ColorSize_t;
//
//std::array<std::array<Block, WORLD_WIDTH>, WORLD_HEIGHT> world = \
//filled_array(std::array<std::array<Block, WORLD_WIDTH>, WORLD_HEIGHT>(), \
//        AIR);
//
//void render()
//{
//    glClearColor(1.0f, 1.0f, 1.0, 0.0f);
//    glClear(GL_COLOR_BUFFER_BIT);
//    for(int y = 0; y < WORLD_HEIGHT; y++)
//    {
//        for(int x = 0; x < WORLD_WIDTH; x++)
//        {
//            switch (world[y][x].type)
//            {
//                case air:
//                case brick:
//                case sand:
//                {
//                    glBegin(GL_QUADS);
//                    glColor3f(float((ColorSize_t){world[y][x].any}.r) / 255.0f,
//                            float((ColorSize_t){world[y][x].any}.g) / 255.0f,
//                            float((ColorSize_t){world[y][x].any}.b) / 255.0f);
//                    glVertex2i(x * RESOLUTION, y * RESOLUTION);
//                    glVertex2i(x * RESOLUTION, (y + 1) * RESOLUTION);
//                    glVertex2i((x + 1) * RESOLUTION, (y + 1) * RESOLUTION);
//                    glVertex2i((x + 1) * RESOLUTION, y * RESOLUTION);
//                    glEnd();
//                    break;
//                }
//            }
//        }
//    }
//    glutSwapBuffers();
//}
//
//void click(int button, int state, int x, int y)
//{
//    x /= RESOLUTION; y = WORLD_HEIGHT - (y / RESOLUTION);
//    if (button != GLUT_LEFT_BUTTON) return;
//    if (state != GLUT_DOWN) return;
//    world[y][x] = (Block){.type = sand, .any = RGB(0xF4, 0xA4, 0x60)};
//    previousX = x;
//    previousY = y;
//    glutPostRedisplay();
//}
//
//void line(int x1, int y1, int x2, int y2, Block block)
//{
////    int dx = x2 - x1, dy = y2 - y1;
////    if (abs(dx) > abs(dy))
////    {
////        for (int i = x1; i != x2; i += (dx > 0 ? 1 : -1))
////        {
////            world[y1][i] = block;
////            y1 += dy / abs(dx);
////        }
////    }
////    else
////    {
////        for (int i = y1; i != y2; i += (dy > 0 ? 1 : -1))
////        {
////            world[i][x1] = block;
////            x1 += dx / abs(dy);
////        }
////    }
//    world[y2][x2] = block;
//}
//
//void motion(int x, int y)
//{
//    x /= RESOLUTION; y = WORLD_HEIGHT - (y / RESOLUTION);
//    if (y > WORLD_HEIGHT or y < 0 or x > WORLD_WIDTH or x < 0) return;
//    line(previousX, previousY, x, y, (Block){.type = sand, .any = RGB(0xF4, 0xA4, 0x60)});
//    previousX = x;
//    previousY = y;
//    glutPostRedisplay();
//}
//
//void setup()
//{
//    glTranslatef(-1.0f, -1.0f, 0.0f);
//    glScalef(2.0f / WINDOW_WIDTH, 2.0f / WINDOW_HEIGHT, 1.0f);
//}
//
//void tick(int = 0)
//{
//    std::array<std::array<Block, WORLD_WIDTH>, WORLD_HEIGHT> bufferWorld = world;
//    for (int y = 0; y < WORLD_HEIGHT; y++)
//    {
//        for (int x = 0; x < WORLD_WIDTH; x++)
//        {
//            switch (bufferWorld[y][x].type)
//            {
//                case sand:
//                {
//                    if (y == 0) break;
//                    if (bufferWorld[y - 1][x].type == air)
//                    {
//                        world[y - 1][x] = world[y][x];
//                        world[y][x] = AIR;
//                    }
//                    break;
//                }
//                default: break;
//            }
//        }
//    }
//    glutTimerFunc(1000 / TICKRATE, tick, 0);
//    glutPostRedisplay();
//}
//
//int main(int argc, char*argv[])
//{
//    glutInit(&argc, argv);
//    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
//    glutInitDisplayMode(GLUT_RGBA);
//    glutCreateWindow("SandSimulator");
//    glutDisplayFunc(render);
//    glutMouseFunc(click);
//    glutMotionFunc(motion);
//    setup();
//    tick();
//    glutMainLoop();
//}

