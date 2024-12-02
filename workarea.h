#ifndef WORKAREA_H
#define WORKAREA_H

#include <QGraphicsView>
#include <QObject>
#include <QWidget>

class WorkArea : public QGraphicsView
{
    Q_OBJECT

public:
    explicit WorkArea(QWidget *parent = nullptr);
    ~WorkArea();

protected:


private:
    QGraphicsScene* scene;
};

#endif // WORKAREA_H
