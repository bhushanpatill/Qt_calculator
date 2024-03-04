#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int first_number, second_number, third_number;

void MainWindow::on_button_plus_clicked()
{
    first_number = ui->txt_firstNum->text().toInt();
    second_number = ui->txt_secondNum->text().toInt();
    third_number = first_number + second_number;
    ui->txt_result->setText(QString::number(third_number));
}


void MainWindow::on_button_minus_clicked()
{
    first_number = ui->txt_firstNum->text().toInt();
    second_number = ui->txt_secondNum->text().toInt();
    third_number = first_number - second_number;
    ui->txt_result->setText(QString::number(third_number));
}


void MainWindow::on_button_multiplication_clicked()
{
    first_number = ui->txt_firstNum->text().toInt();
    second_number = ui->txt_secondNum->text().toInt();
    third_number = first_number * second_number;
    ui->txt_result->setText(QString::number(third_number));
}


void MainWindow::on_button_divide_clicked()
{
    first_number = ui->txt_firstNum->text().toInt();
    second_number = ui->txt_secondNum->text().toInt();
    third_number = first_number / second_number;
    ui->txt_result->setText(QString::number(third_number));
}


void MainWindow::on_button_modulus_clicked()
{
    first_number = ui->txt_firstNum->text().toInt();
    second_number = ui->txt_secondNum->text().toInt();
    third_number = first_number % second_number;
    ui->txt_result->setText(QString::number(third_number));
}

