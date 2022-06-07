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

  if(maxX > 250 || maxY > 250)
  {
      qreal scale = 1;
      if(maxX >= maxY)
          scale = 1 - ((maxX / 250) * 0.1);
      else
          scale = 1 - ((maxY / 250) * 0.1);

      painter.scale(scale,scale);
  }

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

void DrawViewWidget::redraw()
{
    Clist.clear();
    maxX = 250, maxY = 250;
    update();
}

void DrawViewWidget::removeLast()
{
    if(!Clist.empty())
        Clist.removeLast();
    else
        maxX = 250, maxY = 250;
    update();
}
