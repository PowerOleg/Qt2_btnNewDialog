#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_newDialog_clicked()
{
    dialog->show();
}


void MainWindow::on_btn_ok_clicked()
{
    close();
}


void MainWindow::on_btn_cancel_clicked()
{
     close();
}

