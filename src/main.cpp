#pragma Once
#include <iostream>
#include "../include/Game.h"
#include "../include/LegoFactory.h"

int main(int argc, char** argv)
{

    Factory* legoFactory = new LegoFactory;
    //std::vector<Brick*> legoBricks;

    //legoBricks.push_back(legoFactory->NewBrick());

    //for(int i{0}; i < legoBricks.size(); i++ )
    //{
        //legoBricks[i]->Draw();
    //}

    system ("pause");
    std::cout << std::endl;

    //Game game;
    //game.run();
    return 1;
}