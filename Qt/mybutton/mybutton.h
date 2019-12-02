#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QMainWindow>
#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT

protected:
    virtual void enterEvent(QEvent *);
    virtual void leaveEvent(QEvent *);

public:
    explicit MyButton(QWidget *parent = 0);

signals:

public slots:
};

#endif // MYBUTTON_H
