#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cplatform.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    CFlyingPlatform FlyingPlatform;

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
