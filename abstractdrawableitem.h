#ifndef ABSTRACTDRAWABLEITEM_H
#define ABSTRACTDRAWABLEITEM_H

#include <QGraphicsItem>
#include <QPainter>

class AbstractDrawableItem : public QGraphicsItem {
public:
    AbstractDrawableItem(QGraphicsItem* parent = nullptr)
        : QGraphicsItem(parent) {}

    // Class is abstract
    virtual ~AbstractDrawableItem() = default;

    virtual void setData(const QVariant& data) = 0;

    QRectF boundingRect() const override {
        return QRectF(-50, -50, 100, 100);
    }

protected:
    virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) = 0;
};

#endif // ABSTRACTDRAWABLEITEM_H
