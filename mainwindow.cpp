#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(settime()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(time_to()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::settime()
{
    QTime time;
    ui->label->setText(time.currentTime().toString("hh:mm:ss.zzz"));
}

void MainWindow::time_to()
{
   QDateTime startDate = QDateTime(QDate(2020, 1, 1), QTime(12, 0, 0));
   QDateTime endDate = QDateTime(QDate(2021, 7, 7), QTime(12, 5, 0));
   int days = startDate.daysTo(endDate);
   ui->label_2->setText(days);
}
