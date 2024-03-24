#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPlainTextEdit>
#include <QComboBox>
#include <QMutex>
#include <QCoreApplication>
#include <QDialog>
#include <iostream>


#include "Adder.h"
#include "mythread.h"
#include "default_params.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Qthread
    MyThread *mThread;



public slots:
    void onValueChanged(int);


private slots:
    void init_stylesheet();
    void init_mainwindow();

    void button1_click();
    void button2_click();
    void button3_click();
    void button4_click();
    // void button5_click();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
