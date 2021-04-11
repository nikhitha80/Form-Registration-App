#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Nikhitha 6067","Confirm Submission?",QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Nikhitha 6067","Submission is Successful!!!");
    }
    if(reply==QMessageBox::No)
    {
        qDebug()<<"Submission Failed";
    }
}
