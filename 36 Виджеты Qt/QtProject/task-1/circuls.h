#pragma once
#include <QPixmap>
#include <QString>
#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class ImageCircul : public QWidget
{
    Q_OBJECT
public :
    void paintEvent(QPaintEvent* e) override;
    void changeColorOnRed();
    void changeColorOnBlue();
    void changeColorOnGreen();
private:
    QPixmap green;
    QPixmap red;
    QPixmap blue;
    QPixmap curent;
};
