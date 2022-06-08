#include <QTest>
#include "tests.h"
#include "drawviewwidget.h"

tests::tests(QObject *parent) :
    QObject(parent)
{
}

void tests::test1_data()
{
    QTest::addColumn<int>("x");
    QTest::addColumn<int>("y");
    QTest::addColumn<int>("r");

    QTest::newRow("data_1") << 10 << 20 << 5;
    QTest::newRow("data_2") << -15 << 15 << 5;
    QTest::newRow("data_3") << 0 << 0 << 1;
    QTest::newRow("data_4") << 0 << 0 << 0;
    QTest::newRow("data_5") << 1 << 1 << 1;
    QTest::newRow("data_6") << -10 << -5 << -10;
}

void tests::test1()
{
    DrawViewWidget dvw;
    QFETCH(int, x);
    QFETCH(int, y);
    QFETCH(int, r);
    QVERIFY2(dvw.addCircle(x,y,r),"Неверный радиус");
}

void tests::test2_data()
{
    QTest::addColumn<int>("x");
    QTest::addColumn<int>("y");
    QTest::addColumn<int>("r");

    QTest::newRow("data_7") << 10 << 20 << 5;
    QTest::newRow("data_8") << -15 << 15 << 5;
    QTest::newRow("data_9") << 0 << 0 << 1;
    QTest::newRow("data_10") << 17 << 15 << 30;
    QTest::newRow("data_11") << 1 << 1 << 1;
    QTest::newRow("data_12") << -10 << -5 << 8;
}

void tests::test2()
{
    DrawViewWidget dvw;
    QFETCH(int, x);
    QFETCH(int, y);
    QFETCH(int, r);
    dvw.addCircle(x,y,r);
    circle c = dvw.returnLast();
    QCOMPARE(c.x,x);
    QCOMPARE(c.y,-y);
    QCOMPARE(c.r,r);

}
