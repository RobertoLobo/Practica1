#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->ui->plainTextEdit->appendPlainText("Whoop");

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->progressBar_2->setValue(98);
    ui->plainTextEdit->appendPlainText("Whaap");
    std::cout << "HolaTodos" << std::endl;
}

