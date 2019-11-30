#include "smallwidget.h"

smallwidget::smallwidget(QWidget *parent) : QWidget(parent)
{
    QSpinBox *spin = new QSpinBox(this);
    QSlider *slider = new QSlider(Qt::Horizontal
                                  ,this);

    //
    QHBoxLayout * hLayout = new QHBoxLayout(this);
    hLayout->addWidget(spin);
    hLayout->addWidget(slider);

    //change
    connect(spin,static_cast<void (QSpinBox::*)(int)>(&QSpinBox::valueChanged),slider,
            &QSlider::setValue);

    connect(slider,&QSlider::valueChanged,spin,&QSpinBox::setValue);
}
