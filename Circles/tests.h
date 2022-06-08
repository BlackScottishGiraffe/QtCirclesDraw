#ifndef TESTS_H
#define TESTS_H

#include <QObject>

class tests : public QObject
{
    Q_OBJECT
public:
    explicit tests(QObject *parent = 0);

private slots:
    void test1_data();
    void test1();
    void test2_data();
    void test2();

};

#endif // TESTS_H
