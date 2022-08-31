/**
 * @author ButterSss
 */

#include "Block.h"

std::map<Blocks, void(*)(int y, int x, void*param)> BlockRenderFunctions = {
        {air, RenderFunctions::air}
};

void RenderFunctions::air(int y, int x, void *param)
{
    glBegin(GL_QUADS);
    glColor3f(255.0f / ((RGB*)param)->red,
              255.0f / ((RGB*)param)->green, 255.0f / ((RGB*)param)->blue);
    glVertex2i(x, y);
    glEnd();
}
