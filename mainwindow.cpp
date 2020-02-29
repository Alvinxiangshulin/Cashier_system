#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include <string>
#include "QDebug"
#include "QDir"
#include <fstream>
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <utility>
#include <iterator>
#include "QString"
#include "QTextStream"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton_4->hide();

}



void MainWindow::on_pushButton_3_clicked()
{
    show_cart_dialog = new MyDialog(this);
    show_cart_dialog->show();
    ui->pushButton_3->hide();
    ui->pushButton_4->show();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete show_cart_dialog;
}

void MainWindow::on_pushButton_4_clicked()
{
    show_cart_dialog->close();
    ui->pushButton_3->show();
    ui->pushButton_4->hide();
}

void MainWindow::on_pushButton_clicked()
{
    ifstream file("Pets.csv");
    if(file.is_open()){
        string line;
        vector<string>one_line;
        vector<vector<string>>lines;
        while(getline(file,line)){
            istringstream iss(line);
            copy(istream_iterator<string>(iss),istream_iterator<string>(),back_inserter(one_line));
            lines.push_back(one_line);
        }

        for(unsigned int i = 0; i< lines.size();i++){
            ui->tableWidget->insertRow(lines.size()-1);

            QTableWidgetItem* Typecell = new QTableWidgetItem;
            ui->tableWidget->setItem(i,0,Typecell);
            QString qs_type = QString::fromStdString(lines[i][0]);
            Typecell->setText(qs_type);

            QTableWidgetItem* Namecell = new QTableWidgetItem;
            ui->tableWidget->setItem(i,1,Namecell);
            QString qs_name = QString::fromStdString(lines[i][1]);
            Namecell->setText(qs_name);

            QTableWidgetItem* Pricecell = new QTableWidgetItem;
            ui->tableWidget->setItem(i,4,Pricecell);
            QString qs_price = QString::fromStdString(lines[i][4]);
            Pricecell->setText(qs_price);
        }
        ui->tableWidget->resizeColumnsToContents();
        ui->tableWidget->resizeRowsToContents();
    }
}

//void MainWindow::actByYourChange(QObject* senderObj){

//}
