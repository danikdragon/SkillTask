#pragma once
#include <QPixmap>
#include <QPainter>
#include <QWidget>
#include <QPaintEvent>

class ImageCircul : public QWidget
{
	Q_OBJECT
public:
	void paintEvent(QPaintEvent* e) override;
	void changeColorOnRed();
	void changeColorOnBlue();
	void changeColorOnGreen();
private:
	QPixmap curent = ("../green.png");
	QPixmap green = ("../green.png");
	QPixmap red = ("../red.png");
	QPixmap blue = ("../blue.png");
};