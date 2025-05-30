#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;
};

class Car : public Vehicle {
public:
    string fuel_type;
    int seating_capacity;

    void display() {
        cout << "Brand: " << brand << ", Model: " << model << endl;
        cout << "Fuel Type: " << fuel_type << ", Seats: " << seating_capacity << endl;
    }
};

int main() {
    Car c;
    c.brand = "Hyundai";
    c.model = "i20";
    c.fuel_type = "Petrol";
    c.seating_capacity = 5;
    c.display();

    return 0;
}