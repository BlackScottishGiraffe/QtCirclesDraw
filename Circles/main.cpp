#include "mainwindow.h"
#include "tests.h"

#include <QApplication>
#include <QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>

int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //return a.exec();

    freopen("testing.log", "w", stdout);
    QApplication a(argc, argv);
    QTest::qExec(new tests, argc, argv);
    return 0;
}
