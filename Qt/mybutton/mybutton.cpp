#include "mybutton.h"
#include <QPixmap>
#include <QBitmap>

MyButton::MyButton(QWidget *parent):
    QPushButton(parent)
{
    QPixmap pixmap(":/home/图片/xiyoulinux.png");

    resize(pixmap.size());
    /* 设置按钮的有效区域 */
    setMask(QBitmap(pixmap.mask()));
    setStyleSheet("QPushButton{border-image: url(:/home/图片/xiyoulinux.png);}");
}

void MyButton::enterEvent(QEvent *event)
{
    setStyleSheet("QPushButton{border-image: url(:/home/图片/xiyoulinux.png);}");
}

void MyButton::leaveEvent(QEvent *)
{
    setStyleSheet("QPushButton{border-image: url(:/home/图片/xiyoulinux.png);}");
}
