#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <QQuickItem>
#include "gamefield.h"

class GameController : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int points READ getPoints CONSTANT)

    Q_PROPERTY(GameField* gameField READ gameField CONSTANT)

public:
    explicit GameController(QObject *parent = nullptr);

    GameField* gameField() const { return _gameField; }
signals:

public slots:
    int getPoints() const;

    void startNewGame();
    void exit();

private:
    void registerQmlTypes();

private:
    GameField* _gameField;
    int _points;
};

#endif // GAMECONTROLLER_H
