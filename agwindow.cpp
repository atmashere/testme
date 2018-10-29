#include "agwindow.h"
#include "ui_agwindow.h"

AGWindow::AGWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AGWindow)
{
    ui->setupUi(this);
}

AGWindow::~AGWindow()
{
    delete ui;
}
//--------------------------------------------------------
void AGWindow::on_acceptTypeTableBtn_clicked()
{

}

void AGWindow::on_dismissTypeTableBtn_clicked()
{

}

//--------------------------------------------------------
void AGWindow::on_acceptObjectTableBtn_clicked()
{

}

void AGWindow::on_dismissObjectTableBtn_clicked()
{

}

//--------------------------------------------------------
void AGWindow::on_addRulesTableBtn_clicked()
{

}

void AGWindow::on_removeRulesTableBtn_clicked()
{

}

void AGWindow::on_orderRulesTableBtn_clicked()
{

}

void AGWindow::on_acceptRulesTableBtn_clicked()
{

}

void AGWindow::on_dismissRulesTableBtn_clicked()
{

}
