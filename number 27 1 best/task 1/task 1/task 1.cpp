#include <iostream>
using namespace std;

class Area
{
public:
    void setColor(int index)
    {
        switch (index)
        {
        case 1:
            color = RED;
            break;
        case 2:
            color = BLUE;
            break;
        case 3:
            color = GREEN;
            break;
        default:
            color = NONE;
            break;
        }
    }
    string getColor()
    {
        switch (color)
        {
        case 1:
            return "Red";
        case 2:
            return "Blue";
        case 3:
            return "Green";
        default:
            return "None";
        }
    }
protected:
    enum Color
    {
        NONE,
        RED,
        BLUE,
        GREEN
    };
    double space = 0;
    double center = 0;
    Color color = NONE;
};

class Circle: public Area
{
public:
    void setRadius(double radius)
    {
        this->radius = radius;
        
    }
    void area()
    {
        space = atan(1) * 4 * radius;
        cout << "Circle area: " << space << "\n";
    }
private:
    double radius = 0;
};

class Square: public Area
{
public:
    void setLength(double length)
    {
        this->length = length;
    }
    void area()
    {
        space = length * length * sqrt(3) / 4;
        cout << "Square area: " << space << "\n";
    }
private:
    double length = 0;
};

class Triangle:public Area
{
public:
    void setLength(double length)
    {
        this->length = length;
    }
    void area()
    {
        space = length * length;
        cout << "Square area: " << space << "\n";
    }
private:
    double length = 0;
};

class Rectangle: public Area
{
public:
    void setWidth(double width)
    {
        this->width = width;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    void area()
    {
        space = width * height;
        cout << "Circle area: " << space << "\n";
    }
private:
    double width = 0, height = 0;
};

int main()
{
    while (true)
    {
        string command;
        cout << "Enter figure: ";
        cin >> command;
        if (command == "circle")
        {
            Circle* circle = new Circle;
            double radius = 0;
            int color;

            cout << "Enter radius: ";
            cin >> radius;
            circle->setRadius(radius);
            cout << "Enter color (0-3): ";
            cin >> color;
            circle->setColor(color);

            cout << "Your circle: " << circle->getColor() << "\n";
            circle->area();

            delete circle;
            circle = nullptr;
        }
        else if (command == "square")
        {
            Square* square = new Square;
            double length = 0;
            int color;

            cout << "Enter length: ";
            cin >> length;
            square->setLength(length);
            cout << "Enter color (0-3): ";
            cin >> color;
            square->setColor(color);

            cout << "Your square: " << square->getColor() << "\n";
            square->area();

            delete square;
            square = nullptr;
        }
        else if (command == "triangle")
        {
            Triangle* triangle = new Triangle;
            double length = 0;
            int color;

            cout << "Enter length: ";
            cin >> length;
            triangle->setLength(length);
            cout << "Enter color (0-3): ";
            cin >> color;
            triangle->setColor(color);

            cout << "Your triangle: " << triangle->getColor() << "\n";
            triangle->area();

            delete triangle;
            triangle = nullptr;
        }
        else if (command == "rectangle")
        {
            Rectangle* rectangle = new Rectangle;
            double width = 0, height = 0;
            int color;

            cout << "Enter width: ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;

            rectangle->setWidth(width);
            rectangle->setHeight(height);

            cout << "Enter color (0-3): ";
            cin >> color;
            rectangle->setColor(color);

            cout << "Your rectangle " << rectangle->getColor() << "\n";
            rectangle->area();

            delete rectangle;
            rectangle = nullptr;
        }
    }
}