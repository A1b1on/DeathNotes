#include "sidepanel.h"

SidePanel::SidePanel(QWidget *parent)
    : QWidget{parent}
{
    this->setObjectName("SidePanel");

    this->layout = new QVBoxLayout(this);
    this->layout->setContentsMargins(4, 4, 4, 4);
    this->layout->setSpacing(2);

    this->textButton  = new QPushButton("T", this);
    this->arrowButton = new QPushButton("A", this);

    QSize buttonSize(35, 35);
    this->textButton->setFixedSize(buttonSize);
    this->arrowButton->setFixedSize(buttonSize);

    this->layout->addWidget(this->textButton);
    this->layout->addWidget(this->arrowButton);
    this->layout->addStretch();

    this->setWidgetStyles();

    connect(this->textButton, &QPushButton::clicked, this, &SidePanel::onTextButtonClick);
    connect(this->arrowButton, &QPushButton::clicked, this, &SidePanel::onArrowButtonClick);
}

SidePanel::~SidePanel()
{
    delete this->textButton;
    delete this->arrowButton;

    delete this->layout;
}

void SidePanel::setWidgetStyles()
{

    QPalette pal = this->palette();
    pal.setColor(QPalette::Window, QColor("#3f3f3f"));
    this->setPalette(pal);
    this->setAutoFillBackground(true);

    QString buttonStyle = "QPushButton {"
                          "border: 2px solid #8f8f91;"
                          "border-radius: 5px;"
                          "background-color: #f0f0f0;"
                          "font-size: 16px;"
                          "}"
                          "QPushButton::hover {"
                          "background-color: #dcdcdc;"
                          "}";
    this->textButton->setStyleSheet(buttonStyle);
    this->arrowButton->setStyleSheet(buttonStyle);
}

void SidePanel::onTextButtonClick()
{
    emit this->onTextButtonClicked();
}

void SidePanel::onArrowButtonClick()
{
    emit this->onArrowButtonClicked();
}
