#pragma once
#include <iostream>

struct Point
{
	double x, y;
};

void scalpel(Point& p1, Point& p2);

bool hemostat(Point& p1);

bool tweezers(Point& p2);

bool suture(Point& p1, Point& p2);