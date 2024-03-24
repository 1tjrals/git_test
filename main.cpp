
#include <QApplication>
#include <iostream>

#include "Adder.h"
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    //ruuun
    std::cout << "ruuuuuuun!" << std::endl;
    // return 0;
    
    //add
    C_Calculator calc;
    calc.Run();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();




}