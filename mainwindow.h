#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTime>
#include <QMainWindow>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void settime();
    void time_to();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
