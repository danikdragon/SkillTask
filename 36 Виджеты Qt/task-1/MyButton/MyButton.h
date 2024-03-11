#pragma once
#include <QPushbutton>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QKeyEvent>
#include <QTimer>
#include <string>

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
};
