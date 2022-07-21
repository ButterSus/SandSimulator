/**
 * @author Bruh Games Team
 */

#ifndef SANDSIMULATOR_ELEMENT_H
#define SANDSIMULATOR_ELEMENT_H

enum ElementType {
    blockBrick,
    blockSand,
    blockVoid
};

typedef struct {
    int x, y;
    ElementType type;
} Element;

#endif //SANDSIMULATOR_ELEMENT_H
