#ifndef SIDEPANEL_H
#define SIDEPANEL_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class SidePanel : public QWidget
{
    Q_OBJECT
public:
    explicit SidePanel(QWidget *parent = nullptr);
    ~SidePanel();

private:
    QVBoxLayout* layout;

    QPushButton* textButton;
    QPushButton* arrowButton;

    void setWidgetStyles();

signals:
    void onTextButtonClicked();
    void onArrowButtonClicked();

private slots:
    void onTextButtonClick();
    void onArrowButtonClick();
};

#endif // SIDEPANEL_H
