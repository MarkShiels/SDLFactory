#pragma Once
#include "../include/Factory.h"

class LegoFactory : public Factory
{
public:

    Brick* NewBrick();
   
   
};