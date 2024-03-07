#include <QtWidgets/QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QPushbutton>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QTimer>
#include <QKeyEvent>
#include <string>

using namespace std;

class ImageButton : public QPushButton
{
    Q_OBJECT
public:
    ImageButton() = default;
    ImageButton(QWidget* parent);
    void paintEvent(QPaintEvent* e) override;
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
    void keyPressEvent(QKeyEvent* e) override;
public slots:
    void setUp();
    void setDown();
private:
    QPixmap mCurrentButton;
    QPixmap mDownButton;
    QPixmap mUpButton;
    bool isDown = false;
};


ImageButton::ImageButton(QWidget* parent)
{
    setParent(parent);
    setToolTip("Это кнопка");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mDownButton = QPixmap("B:/c++/SkillTusk/36 Виджеты Qt/task-1/down.png");
    mUpButton = QPixmap("B:/c++/SkillTusk/36 Виджеты Qt/task-1/up.png");
    mCurrentButton = mUpButton;
    setFixedSize(100, 100);
    connect(this, &QPushButton::clicked, this, &ImageButton::setDown);
}

void ImageButton::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentButton);
}

QSize ImageButton::sizeHint() const
{
    return QSize(100, 100);
}
QSize ImageButton::minimumSizeHint() const
{
    return sizeHint();
}
void ImageButton::keyPressEvent(QKeyEvent* e)
{
    setDown();
}
void ImageButton::setDown()
{
    mCurrentButton = mDownButton;
    update();
    QTimer::singleShot(100, this, &ImageButton::setUp);
}
void ImageButton::setUp()
{
    mCurrentButton = mUpButton;
    update();
}

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
