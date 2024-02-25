#include <iostream>
#include "task-1.1.h"

using namespace std;

void scalpel(Point& p1, Point& p2)
{
	cin >> p1.x >> p1.y;
	cin >> p2.x >> p2.y;
}

bool hemostat(Point& p1)
{
	double a, b;
	cin >> a >> b;
	if (p1.x == a && p1.y == b)
		return true;
	return false;
}

bool tweezers(Point& p2)
{
	double a, b;
	cin >> a >> b;
	if (p2.x == a && p2.y == b)
		return true;
	return false;
}

bool suture(Point& p1, Point& p2)
{
	double a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	p1.x -= a;
	p1.y -= b;
	p2.x -= c;
	p2.y -= d;
	if ( (p1.x <= 0 && p1.y <= 0) && (p2.x <= 0 && p2.y <= 0))
		return true;
	return false;
}