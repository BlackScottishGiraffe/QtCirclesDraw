#ifndef DRAWVIEWWIDGET_H
#define DRAWVIEWWIDGET_H

#include <QWidget>

struct circle{
    int x = 0,y = 0,r = 0;
};

class DrawViewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawViewWidget(QWidget *parent = nullptr);
    bool addCircle(int x, int y, int r);
    bool removeLast();
    circle returnLast();
    int returnMaxX();
    int returnMaxY();
protected:
    void paintEvent(QPaintEvent *e) override;
signals:

};

#endif // DRAWVIEWWIDGET_H
