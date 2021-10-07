#pragma Once
#include "../include/LegoFactory.h"

Brick* LegoFactory::NewBrick()
{
    return new LegoBrick;
}