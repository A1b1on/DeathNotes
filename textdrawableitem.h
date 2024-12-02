#ifndef TEXTDRAWABLEITEM_H
#define TEXTDRAWABLEITEM_H

#include "abstractdrawableitem.h"

#include <QGraphicsItem>
#include <QPainter>
#include <QString>

class TextDrawableItem : public AbstractDrawableItem {
public:
    TextDrawableItem(const QString& text = "", QGraphicsItem* parent = nullptr)
        : AbstractDrawableItem(parent), m_text(text) {}

    void setData(const QVariant& data) override {
        if (data.canConvert<QString>()) {
            m_text = data.toString();
            update(); // Перерисовка объекта
        }
    }

    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
        Q_UNUSED(option)
        Q_UNUSED(widget)

        painter->setPen(Qt::black);
        painter->setFont(QFont("Arial", 12));
        painter->drawText(boundingRect(), Qt::AlignCenter, m_text);
    }

private:
    QString m_text;
};


#endif // TEXTDRAWABLEITEM_H
