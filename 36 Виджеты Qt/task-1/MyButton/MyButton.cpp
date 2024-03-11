#include "MyButton.h"

ImageButton::ImageButton(QWidget* parent)
{
    setParent(parent);
    setToolTip("click me");
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mDownButton = QPixmap("../down.png");
    mUpButton = QPixmap("../up.png");
    mCurrentButton = mUpButton;
    setGeometry(mCurrentButton.rect());
    connect(this, &QPushButton::clicked, this, &ImageButton::setDown);
}

void ImageButton::paintEvent(QPaintEvent* e)
{
    QPainter p(this);
    p.drawPixmap(e->rect(), mCurrentButton);
}

QSize ImageButton::sizeHint() const { return QSize(100, 100); }
QSize ImageButton::minimumSizeHint() const { return sizeHint(); }
void ImageButton::keyPressEvent(QKeyEvent* e) { setDown(); }

void ImageButton::setUp()
{
    mCurrentButton = mUpButton;
    update();
}
void ImageButton::setDown()
{
    mCurrentButton = mDownButton;
    update();
    QTimer::singleShot(100, this, &ImageButton::setUp);
}