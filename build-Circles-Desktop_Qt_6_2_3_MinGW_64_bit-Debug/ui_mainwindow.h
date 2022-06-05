/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "drawviewwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *ListTable;
    QPushButton *DeleteButton;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *YLine;
    QSpinBox *XLine;
    QLabel *label_5;
    QSpinBox *RLine;
    QPushButton *AddButton;
    DrawViewWidget *DrawView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(772, 542);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        ListTable = new QTableWidget(centralwidget);
        if (ListTable->columnCount() < 3)
            ListTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        ListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        ListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        ListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        ListTable->setObjectName(QString::fromUtf8("ListTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ListTable->sizePolicy().hasHeightForWidth());
        ListTable->setSizePolicy(sizePolicy);
        ListTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        ListTable->horizontalHeader()->setDefaultSectionSize(80);

        verticalLayout_2->addWidget(ListTable);

        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));

        verticalLayout_2->addWidget(DeleteButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        YLine = new QSpinBox(centralwidget);
        YLine->setObjectName(QString::fromUtf8("YLine"));
        YLine->setMinimum(-999);
        YLine->setMaximum(999);

        formLayout->setWidget(1, QFormLayout::FieldRole, YLine);

        XLine = new QSpinBox(centralwidget);
        XLine->setObjectName(QString::fromUtf8("XLine"));
        XLine->setMinimum(-999);
        XLine->setMaximum(999);

        formLayout->setWidget(0, QFormLayout::FieldRole, XLine);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        RLine = new QSpinBox(centralwidget);
        RLine->setObjectName(QString::fromUtf8("RLine"));
        RLine->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        RLine->setMinimum(1);
        RLine->setMaximum(999);

        formLayout->setWidget(2, QFormLayout::FieldRole, RLine);

        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, AddButton);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        DrawView = new DrawViewWidget(centralwidget);
        DrawView->setObjectName(QString::fromUtf8("DrawView"));
        DrawView->setMinimumSize(QSize(500, 500));
        DrawView->setMaximumSize(QSize(500, 500));

        horizontalLayout_2->addWidget(DrawView);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem = ListTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = ListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = ListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        DeleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\321\216\321\216 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\275\321\203\321\216", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
