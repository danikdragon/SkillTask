#include "Header1.h"



int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    ImageButton blackButton;
    blackButton.setFixedSize(100, 100);
    blackButton.move(1000, 400);
    blackButton.show();
    a.exec();
}

//слайдер и ползунок
//QWidget* window = new QWidget;
//window->resize(300, 300);
//auto* slider = new QSlider(Qt::Horizontal, window);
//auto* spinbox = new QSpinBox(window);
//
//slider->setMinimum(0);
//slider->setMaximum(100);
//spinbox->setMinimum(0);
//spinbox->setMaximum(100);
//
//QObject::connect(slider, &QSlider::valueChanged, spinbox, &QSpinBox::setValue);
//QObject::connect(spinbox, &QSpinBox::valueChanged, slider, &QSlider::setValue);
//
//slider->resize(100, 20);
//spinbox->resize(40, 40);
//
//slider->move(100, 50);
//spinbox->move(200, 50);
//
//slider->show();
//spinbox->show();
//window->show();
