#include "gamefield.h"

GameField::GameField(uint width, uint height, QObject* parent)
    : QAbstractListModel(parent)
    , _points   { }
    , _width    { width }
    , _height   { height }
{
    registerQmlTypes();
    for(uint y = 0; y < _height; y++)
        for(uint x = 0; x < _width; x++)
            _points.append(new Point(x,y));
}

//QModelIndex GameField::index(int row, int column, const QModelIndex &parent) const
//{
//}

//QModelIndex GameField::parent(const QModelIndex &index) const
//{
//}

int GameField::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent)
    return _points.size();
}

//int GameField::columnCount(const QModelIndex &parent) const
//{
//    Q_UNUSED(parent)
//    return 4;
//}

QVariant GameField::data(const QModelIndex &index, int role) const
{
    auto const row = index.row();

    switch (role) {
    case static_cast<int>(Roles::XRole):
        return _points.at(row)->xCoord();
    case static_cast<int>(Roles::YRole):
        return _points.at(row)->yCoord();
    case static_cast<int>(Roles::ColorRole):
        return _points.at(row)->color();
    case static_cast<int>(Roles::IsColoredRole):
        return _points.at(row)->isColored();
    default:
        return QVariant();
    }
}

QHash<int, QByteArray> GameField::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[static_cast<int>(Roles::XRole)] = "xRole";
    roles[static_cast<int>(Roles::YRole)] = "yRole";
    roles[static_cast<int>(Roles::ColorRole)] = "colorRole";
    roles[static_cast<int>(Roles::IsColoredRole)] = "isColoredRole";
    return roles;
}

void GameField::registerQmlTypes()
{
//    static bool registered = false;
//    if (!registered) {

//        qmlRegisterUncreatableType<Point::ColorType>("CommandCodes", 1, 0, "ColorCode", "");
//        qmlRegisterUncreatableType<Point>(
//                    "KbMotor.DataModelTypes", 1, 0,
//                    "Points", "NOPE");
//        registered = true;
//    }
}
