#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;
    double area;

public:
    void setColor(string c) { color = c; }
    string getColor() { return color; }
    double getArea() { return area; }

    virtual void calculateArea() = 0;
};

class Circle : public Shape 
{
private:
    double radius;

public:
    Circle(double r) {radius = r;}

    void calculateArea() 
	{
        area = 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w)
	 {
	 length = l;
	 width = w;
	}

    void calculateArea()
	 {
        area = length * width;
    }
};

int main() {
    Circle c(5);
    c.setColor("Red");
    c.calculateArea();          

    Rectangle r(4, 6);
    r.setColor("Blue");
    r.calculateArea();

    cout << "Circle -> Color: " << c.getColor() << ", Area: " << c.getArea() << endl;
    cout << "Rectangle -> Color: " << r.getColor() << ", Area: " << r.getArea() << endl;

    return 0;
}
