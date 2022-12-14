#include "gamefield.h"

GameField::GameField(uint width, uint height, QObject* parent)
    : QAbstractItemModel(parent)
    , _points{}
{
    for(uint y = 0; y < width; y++)
        for(uint x = 0; x < height; x++)
            _points.append(new Point(x,y));
}

QModelIndex GameField::index(int row, int column, const QModelIndex &parent) const
{

}

QModelIndex GameField::parent(const QModelIndex &index) const
{

}

int GameField::rowCount(const QModelIndex &parent) const
{

}

int GameField::columnCount(const QModelIndex &parent) const
{

}

QVariant GameField::data(const QModelIndex &index, int role) const
{

}

QHash<int, QByteArray> GameField::roleNames() const
{

}

void GameField::registerQmlTypes()
{
    static bool registered = false;
    if (!registered) {

        qmlRegisterUncreatableType<Point::ColorType>("CommandCodes", 1, 0, "ColorCode", "");

        registered = true;
    }
}
