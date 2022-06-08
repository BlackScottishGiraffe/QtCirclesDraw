#include <QtTest>

#include "../Circles/drawviewwidget.h"


class DrawViewTest : public QObject
{
    Q_OBJECT

public:
    DrawViewTest();
    ~DrawViewTest();

private slots:
    void test_data();
    void test();

};

DrawViewTest::DrawViewTest()
{

}

DrawViewTest::~DrawViewTest()
{

}

void DrawViewTest::test_data()
{
    QTest::addColumn<int>("x");
    QTest::addColumn<int>("y");
    QTest::addColumn<int>("r");
    QTest::newRow("row1") << 10 << 0 << 5;
    QTest::newRow("row2") << -10 << -20 << 20;
    QTest::newRow("row3") << 35 << 0 << 14;
    QTest::newRow("row4") << 22 << 14 << 16;
    QTest::newRow("row5") << 34 << -41 << 10;
    QTest::newRow("row6") << -18 << -20 << 20;

}

void DrawViewTest::test()
{
    DrawViewWidget dvw;
    QFETCH(int,x);
    QFETCH(int,y);
    QFETCH(int,r);
    dvw.addCircle(x,y,r);
    circle c1;
    c1.x=x;
    c1.y=y;
    c1.r=r;
    circle c2 = dvw.returnLast();
    QCOMPARE(c1,c2);

}

QTEST_APPLESS_MAIN(DrawViewTest)

#include "tst_drawviewtest.moc"
