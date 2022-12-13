#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <QQuickItem>
#include "gamefield.h"

class GameController : public QObject
{
    Q_OBJECT
public:
    explicit GameController(QObject *parent = nullptr);

signals:

public slots:
private:
    GameField* _field;
};

#endif // GAMECONTROLLER_H
