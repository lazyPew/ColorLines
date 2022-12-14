#ifndef POINT_H
#define POINT_H

#include <QObject>

class Point : public QObject
{
    Q_OBJECT
public:
    explicit Point(uint xCoord, uint yCoord, QObject *parent = nullptr);

    enum ColorType {
        NoColor,

        Blue,
        Red,
        Green,
        Yellow
    };
    Q_ENUM(ColorType)

signals:

public slots:
    uint xCoord() const     { return _xCoord; }
    uint yCoord() const     { return _yCoord; }

    uint color() const      { return uint(_color); }
    bool isColored() const  { return _color != ColorType::NoColor; }
private:
    uint _xCoord;
    uint _yCoord;

    ColorType _color;

};

#endif // POINT_H
