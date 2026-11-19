#include <iostream>
using namespace std;

class Shape 
{
protected:
    string color;
    double area;

public:
    void setColor(string c) { color = c; }

    virtual void calculateArea() = 0;

    virtual void display() 
	{
        cout << "This is a Shape" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r, string c)
	{
		color = c;
		radius = r;
	}

    void calculateArea()
	{
        area = 3.14 * radius * radius;
    }

    void display() 
	{
        cout << "Circle" << endl;
        cout << "Color : " << color << endl;
        cout << "Radius : " << radius << endl;
        cout << "Area : " << area << endl << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w, string c) 
	{ 
	    color = c;
		length = l; 
		width = w;
	}

    void calculateArea()
	{
        area = length * width;
    }

    void display() 
	{
        cout << "Rectangle" << endl;
        cout << "Color : " << color << endl;
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << endl << endl;
    }
};

int main() 
{
    Circle c(3, "Red");
    Rectangle r(4, 5, "Green");

    Shape *s[2];
    s[0] = &c;
    s[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        s[i]->calculateArea();
        s[i]->display();
    }

    return 0;
}
