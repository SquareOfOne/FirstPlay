#include "martingarrix.h"
#include "ui_martingarrix.h"

MartinGarrix::MartinGarrix(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MartinGarrix)
{
    ui->setupUi(this);
}

MartinGarrix::~MartinGarrix()
{
    delete ui;
}
