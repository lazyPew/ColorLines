#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <QQuickItem>
#include "gamefield.h"

class GameController : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int points READ getPoints CONSTANT)

public:
    explicit GameController(QObject *parent = nullptr);

signals:

public slots:
    int getPoints() const;

    void startNewGame();
    void exit();

private:
    GameField* _field;
    int _points;
};

#endif // GAMECONTROLLER_H
