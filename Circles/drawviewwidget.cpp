#include <QPainter>
#include "drawviewwidget.h"

struct circle{
    int x = 0,y = 0,r = 0;
};
QList<circle> Clist;
int maxX = 250, maxY = 250;

DrawViewWidget::DrawViewWidget(QWidget *parent)
    : QWidget{parent}
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);
    resize(500,500);
}

void DrawViewWidget::paintEvent(QPaintEvent *e) {
  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.setPen(Qt::black);
  painter.setFont(QFont("Arial",5));
  painter.resetTransform();
  painter.translate(width()/2, height()/2);
  if(!Clist.empty())
  {

      Q_FOREACH(circle c, Clist)
      {
          painter.drawPoint(c.x, c.y);
          painter.drawEllipse(c.x - (c.r), c.y - (c.r), c.r*2, c.r*2);
          painter.drawText(c.x,10,QString::number(c.x));
          painter.drawText(-15,c.y,QString::number(-1*c.y));
      }
  }
  painter.resetTransform();
  painter.drawLine( width()/2, 0, width()/2, height() );
  painter.drawLine( 0, height()/2, width(), height()/2);
}

void DrawViewWidget::addCircle(qreal x, qreal y, qreal r)
{
    circle c;
    c.x = x;
    c.y = -y;
    c.r = r;
    Clist.append(c);
    qreal maxx = abs(x) + r;
    qreal maxy = abs(y) + r;
    if(maxx > maxX)
        maxX = maxx;
    if(maxy > maxY)
        maxY = maxy;
    update();
}

bool DrawViewWidget::removeLast()
{
    bool b = false;
    if(!Clist.empty())
    {
        Clist.removeLast();
        b = true;
    }
    else
    {
         b = false;
    }
    maxX = 250, maxY = 250;
    update();
    return b;
}
<<<<<<< Updated upstream
=======

circle DrawViewWidget::returnLast()
{
    if (!Clist.empty())
        return Clist.last();
    else
    {
        circle c;
        c.x = 0;
        c.y = 0;
        c.r = 1;
        return c;
    }
}

int DrawViewWidget::twoLastIntersect()
{
    circle a = Clist.last();
    Clist.removeLast();
    circle b = Clist.last();
    Clist.append(a);
    int dist = sqrt(pow((b.x-a.x),2)+(pow((b.y-a.y),2)));
    if(a.x == b.x && a.y == b.y && a.r == b.r)
    {
        return 3;
    }
    if (dist == a.r+b.r)
    {
        return 1;
    }
    if (dist < a.r+b.r)
    {
        return 2;
    }
    return 0;

}
>>>>>>> Stashed changes
