#include "workarea.h"

#include <QGraphicsTextItem>
#include <QInputDialog>
#include <QMouseEvent>

WorkArea::WorkArea(QWidget *parent)
    : QGraphicsView(parent)
{
    this->setStyleSheet("background-color: #202020;");
    scene = new QGraphicsScene(this);
    this->setScene(scene);
}

WorkArea::~WorkArea()
{
    delete scene;
}
