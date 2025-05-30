#include <iostream>
using namespace std;

class Rectangle {
public:
    float length, breadth;

    float area() {
        return length * breadth;
    }

    float perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    Rectangle r;
    r.length = 5.0;
    r.breadth = 3.0;

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
}