#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{

}
    
Game::~Game()
{
    cleanUp();
}
    
void Game::run()
{
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    
}

void Game::update()
{
    
}

void Game::render()
{
    
}

void Game::cleanUp()
{
    
}