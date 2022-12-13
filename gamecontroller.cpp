#include "gamecontroller.h"

GameController::GameController(QObject *parent)
    : QObject(parent)
    , _field{new GameField()}
{

}
