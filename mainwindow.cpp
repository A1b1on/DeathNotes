#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QWidget* centralWidget = new QWidget(this);
    this->setCentralWidget(centralWidget);

    QHBoxLayout* mainLayout = new QHBoxLayout(centralWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    this->sidePanel = new SidePanel(centralWidget);
    sidePanel->setFixedWidth(42);

    this->workArea = new WorkArea(centralWidget);

    mainLayout->addWidget(sidePanel);
    mainLayout->addWidget(this->workArea);
    centralWidget->setLayout(mainLayout);

    setWindowTitle("Death Notes");
    this->showMaximized();
}

MainWindow::~MainWindow()
{

}
