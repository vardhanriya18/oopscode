#include <iostream>
using namespace std;

class Shape {
public:
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle: length * breadth" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle: π * r * r" << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    r.displayShape();
    r.area();

    c.displayShape();
    c.area();

    return 0;
}