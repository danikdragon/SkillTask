#include <QApplication>
#include <QSlider>
#include <QObject>
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>
#include <QString>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ImageCircul : public QWidget
{
    Q_OBJECT
public:
    ImageCircul(QWidget *parent = nullptr) : QWidget(parent) {
        green.load("../green.png");
        red.load("../red.png");
        blue.load("../blue.png");
        curent = green;
    }

    void changeColorOnRed() {
        curent = red;
        update();
    }

    void changeColorOnBlue() {
        curent = blue;
        update();
    }

    void changeColorOnGreen() {
        curent = green;
        update();
    }

protected:
    void paintEvent(QPaintEvent* event) override {
        QPainter painter(this);
        painter.drawPixmap(event->rect(), curent);
    }

private:
    QPixmap green;
    QPixmap red;
    QPixmap blue;
    QPixmap curent;
};

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QWidget* window = new QWidget;
    window->setFixedSize(150, 200);
    QVBoxLayout* layout = new QVBoxLayout(window);
    QSlider slider(Qt::Horizontal, window);
    slider.setRange(0, 100);
    layout->addWidget(&slider);

    ImageCircul image(nullptr);
    image.setFixedSize(100, 100);
    layout->addWidget(&image);

    QObject::connect(&slider, &QSlider::valueChanged, [&slider, &image](int newValue)
      {		if (newValue < 33)
                image.changeColorOnGreen();
            else if (newValue >= 33 && newValue <= 66)
                image.changeColorOnBlue();
            else if (newValue > 66)
                image.changeColorOnRed();});

    window->show();
    return a.exec();
}
#include <main.moc>