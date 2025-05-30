#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    // Using a temporary variable
    cout << "Before Swap: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swap (using temp): a = " << a << ", b = " << b << endl;

    // Without using temporary variable
    a = 5; b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swap (without temp): a = " << a << ", b = " << b << endl;

    return 0;
}