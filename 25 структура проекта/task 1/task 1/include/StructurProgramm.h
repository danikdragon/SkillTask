#pragma once
using namespace std;

void scalpel(double& a, double& b)
{
	cin >> a >> b;
}

bool hemostat(double& a)
{
	double b;
	cin >> b;
	if (b == a)
		return true;
	return false;
}

bool tweezers(double& b)
{
	double a;
	cin >> a;
	if (a == b)
		return true;
	return false;
}

bool suture(double& a, double& b)
{
	double c, d;
	cin >> c >> d;
	a -= c;
	b -= d;
	if (a <= 0 && b <= 0)
		return true;
	return false;
}