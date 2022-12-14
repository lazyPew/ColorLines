#include "point.h"

Point::Point(uint xCoord, uint yCoord, QObject *parent)
    : QObject(parent)
    , _xCoord(xCoord)
    , _yCoord(yCoord)
{

}
