#pragma Once
#include <SDL2/SDL.h>
#include <iostream>
class Brick
{
public:

    Brick();
    virtual ~Brick();
    virtual void Draw() = 0;

};

class LegoBrick : public Brick
{
public:

    void Draw() 
    {
        std::cout << "New Lego Brick" << std::endl;
    };
};