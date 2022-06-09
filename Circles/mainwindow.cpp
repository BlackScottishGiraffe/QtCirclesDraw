#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "drawviewwidget.h"

struct circle{
    int x = 0,y = 0,r = 0;
};


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

void MainWindow::on_AddButton_clicked()
{    circle c;
     c.x = ui->XLine->value();
     c.y = ui->YLine->value();
     c.r = ui->RLine->value();
     if(c.r > 0)
     {
         //Clist.append(c);
         int j = ui->ListTable->rowCount();
         ui->ListTable->insertRow(j);
         ui->ListTable->setItem(j,0,new QTableWidgetItem(QString::number(c.x)));
         ui->ListTable->setItem(j,1,new QTableWidgetItem(QString::number(c.y)));
         ui->ListTable->setItem(j,2,new QTableWidgetItem(QString::number(c.r)));

         ui->DrawView->addCircle(c.x, c.y, c.r);
     }
     else
     {
        QMessageBox::warning(this, "Внимание", "Неправельно указан радиус\n");
     }
}


void MainWindow::on_DeleteButton_clicked()
{
    if(!ui->DrawView->removeLast())
    {
        QMessageBox::warning(this, "Внимание", "Список пуст\n");
    }
    else
    {
        int j = ui->ListTable->rowCount()-1;
        ui->ListTable->removeRow(j);
        ui->ListTable->update();
    }
}


void MainWindow::on_checkInter_clicked()
{
    int inter = ui->DrawView->twoLastIntersect();
    switch (inter)
    {
        case 0:
        QMessageBox::warning(this, "Внимание", "Две последние добавленные окружности не пересекаются\n");
        break;
    case 1:
        QMessageBox::warning(this, "Внимание", "Две последние добавленные окружности имеют одну точку пересечения\n");
        break;
    case 2:
        QMessageBox::warning(this, "Внимание", "Две последние добавленные окружности имеют две точки пересечения\n");
        break;
    case 3:
        QMessageBox::warning(this, "Внимание", "Две последние добавленные окружности расположены друг в друге\n");
        break;

    }
}
