#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>

class Helper;

class GLWidget : public QOpenGLWidget
{
   public:
       GLWidget(Helper *helper, QWidget *parent);

   public slots:
       void animate();

   protected:
       void paintEvent(QPaintEvent *event) override;

   private:
       Helper *helper;
       int elapsed;
};

#endif // GLWIDGET_H