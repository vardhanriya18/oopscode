#include <iostream>
using namespace std;

class Complex {
public:
    float real, imag;

    void set(float r, float i) {
        real = r;
        imag = i;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;
    c1.set(2.5, 3.5);
    c2.set(1.5, 2.5);
    result = c1.add(c2);
    result.display();

    return 0;
}