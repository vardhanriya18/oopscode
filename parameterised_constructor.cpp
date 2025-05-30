#include <iostream>
using namespace std;

class Car {
public:
    string brand, model;
    float price;

    Car(string b, string m, float p) {
        brand = b;
        model = m;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << ", Price: " << price << endl;
    }
};

int main() {
    Car car("Toyota", "Innova", 2000000);
    car.display();

    return 0;
}