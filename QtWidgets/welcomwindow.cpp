#include "welcomwindow.h"
#include "ui_welcomwindow.h"

WelcomWindow::WelcomWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WelcomWindow)
{
    ui->setupUi(this);
}

WelcomWindow::~WelcomWindow()
{
    delete ui;
}
