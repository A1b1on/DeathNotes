#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

#include "workarea.h"
#include "sidepanel.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    WorkArea*  workArea;
    SidePanel* sidePanel;
};

#endif // MAINWINDOW_H
