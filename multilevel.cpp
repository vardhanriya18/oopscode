#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Employee : public Person {
public:
    int emp_id;
    float salary;
};

class Manager : public Employee {
public:
    string department;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Emp ID: " << emp_id << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.name = "Priya";
    m.age = 35;
    m.emp_id = 1001;
    m.salary = 75000;
    m.department = "HR";
    m.display();

    return 0;
}
