#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <QObject>
#include <QQuickItem>
#include <QAbstractItemModel>
#include "point.h"
class GameField : public QAbstractItemModel
{
    Q_OBJECT

public:
    GameField(uint width, uint height, QObject* parent = nullptr);

    enum Roles{
        XRole = Qt::UserRole + 1,
        YRole
    };

    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;

    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;

private:
    void registerQmlTypes();
    QVector<Point*> _points;

};

#endif // GAMEFIELD_H
