/**
 * @author ButterSss
 */

#ifndef SANDSIMULATOR_BLOCK_H
#define SANDSIMULATOR_BLOCK_H

#include <GL/glut.h>
#include "RGB.h"
#include <map>

enum Blocks {
    air,
    brick
};

namespace RenderFunctions {
    void air(int y, int x, void*param);
}

extern std::map<Blocks, void(*)(int y, int x, void*param)> BlockRenderFunctions;

struct Block {
    Blocks type;
    void*param;
};

#endif //SANDSIMULATOR_BLOCK_H
