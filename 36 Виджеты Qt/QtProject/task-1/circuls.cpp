#include "circuls.h"

void ImageCircul::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
    green = (QString)("../green.png");
    red = (QString)("../red.png");
    blue = (QString)("../blue.png");
    curent = green;
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
