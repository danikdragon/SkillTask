#include <QtWidgets>
#include <QApplication>
#include <QSlider>
#include <QLabel>
#include <QVBoxLayout>
#include "circuls.h"

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

