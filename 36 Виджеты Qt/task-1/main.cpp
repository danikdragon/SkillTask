#include "circuls.h"
#include <QtWidgets>
#include <QApplication>
#include <QSlider>
#include <QLabel>
#include <QVBoxLayout>
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QWidget* window = new QWidget;
    window->setFixedSize(150, 200);
    QVBoxLayout* layout = new QVBoxLayout(window);
    QSlider slider(Qt::Horizontal, window);
	slider.setRange(0, 100);
	layout->addWidget(&slider);

    ImageCircul* image = new ImageCircul();
	image->setFixedSize(100, 100);
	layout->addWidget(image); 

    QObject::connect(&slider, &QSlider::valueChanged, [&slider, &image](int newValue)
    {		if (newValue < 33)
				image->changeColorOnGreen();
			else if (newValue >= 33 && newValue <= 66)
				image->changeColorOnBlue();
			else if (newValue > 66)
				image->changeColorOnRed();});

    window->show();
    return a.exec();
}

//программа с кнопкой
//QApplication a(argc, argv);
//ImageButton MyButton(nullptr);
//MyButton.setFixedSize(100, 100);
//MyButton.show();
//return a.exec();

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
