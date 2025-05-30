#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    Circle() {
        radius = 1.0;
    }

    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c1;
    Circle c2(3.0);

    cout << "Area of default circle: " << c1.area() << endl;
    cout << "Area of circle with radius 3: " << c2.area() << endl;

    return 0;
}