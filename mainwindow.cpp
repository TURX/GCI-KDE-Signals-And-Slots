#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(setColor(int)));
}

void MainWindow::setColor(int color) {
    setStyleSheet("background-color: rgb(100, 200, " + (QString::number(color)) + ")");
    qDebug() << "background-color: rgb(100, 200, " + (QString::number(color)) + ")" << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
