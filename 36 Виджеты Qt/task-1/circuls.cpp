#include "circuls.h"

void ImageCircul::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	painter.drawPixmap(event->rect(), curent);
}
void ImageCircul::changeColorOnRed()
{
	this->curent = this->red;
	update();
}
void ImageCircul::changeColorOnBlue()
{
	this->curent = this->blue;
	update();
}
void ImageCircul::changeColorOnGreen()
{
	this->curent = this->green;
	update();
}