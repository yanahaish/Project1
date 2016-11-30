#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    enum a{PLUS = 0,MINUS,MULTI,DIVISION,RESULT};

public slots:
    void plus();
    void minus();
    void multi();
    void division();
    void result();
    void input();
    void result2();

private:
    Ui::MainWindow *ui;
    double odd;
    a act;
    bool flag_clear_win;
    double prom;
};


#endif // MAINWINDOW_H
