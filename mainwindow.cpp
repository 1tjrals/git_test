#include "mainwindow.h"
#include "form/ui_mainwindow.h"


using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_stylesheet();
    init_mainwindow();


}

MainWindow::~MainWindow()
{delete ui;}

void MainWindow::init_stylesheet(){
    QString Frame_1_stylesheet=FRAME_1_STYLESHEET;
    ui->frame_2->setStyleSheet(Frame_1_stylesheet.arg(BACK_GROUND_COLOR,FRAME_BORDER_POLICY));
}

void MainWindow::init_mainwindow(){
    // Fill the items of the ComboBox
    for(int i = 0; i < 10; i++)
    {
        ui->comboBox_1->addItem("item " + QString::number(i));
    }
    
    //button
    connect(ui->pushButton_1,&QPushButton::clicked,this,&MainWindow::button1_click);
    connect(ui->pushButton_2,&QPushButton::clicked,this,&MainWindow::button2_click);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&MainWindow::button3_click);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&MainWindow::button4_click);
    // connect(ui->pushButton_5,&QPushButton::clicked,this,&MainWindow::button5_click);

    mThread = new MyThread(this);
    connect(mThread, SIGNAL(valueChanged(int)),this, SLOT(onValueChanged(int)));


}

void MainWindow::button1_click(){
    QString aa=ui->textEdit_1->toPlainText();
    QString bb=ui->textEdit_2->toPlainText();
    C_Adder adder(aa.toInt(), bb.toInt());
    cout << adder.Process() << endl;
    double cc =adder.Process();
    ui->textEdit_3->setText(QString::number(cc));
    system("bash ~/ws/git/git_test/script/csv.sh");

}   

void MainWindow::button2_click(){
    // QString bb = ui->comboBox_1->currentText();
    ui->label_1->setText("aa : "+ui->comboBox_1->currentText());
}

void MainWindow::onValueChanged(int count){
    ui->label_2->setText(QString::number(count));
    // cout << count << endl;
}

// Start button
void MainWindow::button3_click(){
    mThread->start();
}
// Stop button
void MainWindow::button4_click(){
    mThread->Stop = true;
}


