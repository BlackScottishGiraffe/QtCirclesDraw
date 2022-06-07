#ifndef DRAWVIEWWIDGET_H
#define DRAWVIEWWIDGET_H

#include <QWidget>

class DrawViewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DrawViewWidget(QWidget *parent = nullptr);
    void addCircle(qreal x, qreal y, qreal r);
    void redraw();
    bool removeLast();
protected:
    void paintEvent(QPaintEvent *e) override;
signals:

};

#endif // DRAWVIEWWIDGET_H
