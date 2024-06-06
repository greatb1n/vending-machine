#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->coffee->setEnabled(false);
    ui->tea->setEnabled(false);
    ui->milk->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::add(int num)
{
    money += num;
    ui->total->display(money);
    if(money<100){
        ui->coffee->setEnabled(false);
        ui->tea->setEnabled(false);
        ui->milk->setEnabled(false);
    }
    else if(money<150){
        ui->coffee->setEnabled(true);
        ui->tea->setEnabled(false);
        ui->milk->setEnabled(false);
    }
    else if(money<200){
        ui->coffee->setEnabled(true);
        ui->tea->setEnabled(true);
        ui->milk->setEnabled(false);
    }
    else{
        ui->coffee->setEnabled(true);
        ui->tea->setEnabled(true);
        ui->milk->setEnabled(true);
    }
}

void Widget::on_ten_clicked()
{
    add(10);
}
void Widget::on_fifty_clicked()
{
    add(50);
}
void Widget::on_hundred_clicked()
{
    add(100);
}
void Widget::on_five_hundred_clicked()
{
    add(500);
}
void Widget::on_coffee_clicked()
{
    add(-100);
}
void Widget::on_tea_clicked()
{
    add(-150);
}
void Widget::on_milk_clicked()
{
    add(-200);
}


void Widget::on_reset_clicked()
{
    QMessageBox message;
    int tmp1 = money/500;
    int tmp2 = (money%500)/100;
    int tmp3 = ((money%500)%100)/50;
    int tmp4 = (((money%500)%100)%50)/10;
    char msg[1000];
    sprintf(msg, "500won: %d, 100won: %d, 50won: %d, 10won: %d", tmp1, tmp2, tmp3, tmp4);
    message.information(this, "changes", msg);
    add(-money);
}

void Widget::on_Widget_customContextMenuRequested(const QPoint &pos)
{

}

