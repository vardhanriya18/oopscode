#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {
        cout << "Constructor called: Employee created." << endl;
    }

    ~Employee() {
        cout << "Destructor called: Employee removed." << endl;
    }
};

int main() {
    Employee emp;
    return 0;
}