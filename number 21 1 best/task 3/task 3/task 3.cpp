#include <iostream>
using namespace std;

struct Vector2D
{
	double x = 0;
	double y = 0;
};

Vector2D add(Vector2D a, Vector2D b)
{
	Vector2D c;
	c.x = (a.x + b.x);
	c.y = (a.y + b.y);
	return c;
}

Vector2D subtract(Vector2D a, Vector2D b)
{
	Vector2D c;
	c.x = (a.x - b.x);
	c.y = (a.y - b.y);
	return c;
}

Vector2D scale(Vector2D a, int scale)
{
	a.x = (a.x * scale);
	a.y = (a.y * scale);
	return a;
}

double length(Vector2D a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}

Vector2D normalize(Vector2D a)
{
	double len = length(a);
	a.x = a.x / len;
	a.y = a.y / len;
	return a;
}

int main()
{
	Vector2D a, b;
	string action;

	cout << "Enter a.x :";
	cin >> a.x;
	cout << "Enter a.y :";
	cin >> a.y;

	cout << "Enter b.x :";
	cin >> b.x;
	cout << "Enter b.y :";
	cin >> b.y;

	while (true)
	{
		Vector2D buffer;
		double d_buffer = 0;
		cout << "Enter action ( add - subtract - scale - length - normalize ):";
		cin >> action;

		// функция add
		if (action == "add")
			buffer = add(a, b);

		// функция subtract
		if (action == "subtract")
			buffer = subtract(a, b);

		// функция scale
		if (action == "scale")
		{
			cout << "Select vector :";
			cin >> action;
			cout << "Select scale number (double) : ";
			cin >> d_buffer;
			if (action == "a")
				buffer = scale(a, d_buffer);
			if (action == "b")
				buffer = scale(b, d_buffer);
			d_buffer = 0;
		}

		// функция length
		if (action == "length")
		{
			cout << "Select vector :";
			cin >> action;
			if (action == "a")
				d_buffer = length(a);
			if (action == "b")
				d_buffer = length(b);
		}

		// функция normalize
		if (action == "normalize")
		{
			cout << "Select vector :";
			cin >> action;
			if (action == "a")
				buffer = normalize(a);
			if (action == "b")
				buffer = normalize(b);
		}

		// вывод
		if (d_buffer != 0)
			cout << "\n Expression - " << d_buffer << "\n\n";
		else
			cout << "\n Expression - x = " << buffer.x << " y = " << buffer.y << "\n\n";
	}
}
