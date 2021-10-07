#pragma Once
#include "../include/Brick.h"
#include <vector>

class Factory
{
public:
    
    virtual Brick* NewBrick() = 0;

};

