#include "gamecontroller.h"

GameController::GameController(QObject *parent)
    : QObject(parent)
    , _field{new GameField(9,9)}
    , _points(0)
{

}

int GameController::getPoints() const
{
    return _points;
}

void GameController::startNewGame()
{

}

void GameController::exit()
{

}
