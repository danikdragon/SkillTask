#include <QApplication>
#include <QSlider>
#include <QObject>
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
        green.load("../PNG/green.png");
        red.load("../PNG/red.png");
        blue.load("../PNG/blue.png");
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
    QApplication app(argc, argv);
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
      {
          if (newValue >= 33) {
              if (newValue < 66)
                  image.changeColorOnBlue();
              else if (newValue >= 66)
                  image.changeColorOnRed();
          } else image.changeColorOnGreen();
      });

    window->show();
    return app.exec();
}
#include <main.moc>