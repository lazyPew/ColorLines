#include "gamecontroller.h"
#include "point.h"

GameController::GameController(QObject *parent)
    : QObject(parent)
    , _gameField{new GameField(9,9)}
    , _points(0)
{
    registerQmlTypes();
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

void GameController::registerQmlTypes()
{
    static bool registered = false;
    if (!registered) {
//        qmlRegisterUncreatableType<Point::ColorType>("CommandCodes", 1, 0, "ColorCode", "");
        qmlRegisterUncreatableType<Point>(
                    "KbMotor.DataModelTypes", 1, 0,
                    "Points", "NOPE");
        registered = true;
    }
}
