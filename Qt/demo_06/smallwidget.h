#ifndef SMALLWIDGET_H
#define SMALLWIDGET_H

#include <QWidget>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>

class smallwidget : public QWidget
{
    Q_OBJECT
public:
    explicit smallwidget(QWidget *parent = 0);

signals:

public slots:
};

#endif // SMALLWIDGET_H
