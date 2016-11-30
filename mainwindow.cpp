#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDoubleValidator>

MainWindow: :MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui: :MainWindow)
{
    prom = 0;
    ui->setupUi(this);
    connect(ui->zero,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->one,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->two,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->three,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->four,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->five,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->six,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->seven,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->eight,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->nine,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->buttonPoint,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->button,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->zero,SIGNAL(clicked(bool)),this,SLOT(input()));
    connect(ui->zero,SIGNAL(clicked(bool)),this,SLOT(input()));
}
