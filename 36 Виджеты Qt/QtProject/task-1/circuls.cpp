#include "circuls.h"

void ImageCircul::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
    green.load("../green.png");
    red.load("../red.png");
    blue.load("../blue.png");
    curent.load(green);
	painter.drawPixmap(event->rect(), curent);
}
void ImageCircul::changeColorOnRed()
{
	this->curent = this->red;
}
void ImageCircul::changeColorOnBlue()
{
	this->curent = this->blue;
}
void ImageCircul::changeColorOnGreen()
{
	this->curent = this->green;
}
