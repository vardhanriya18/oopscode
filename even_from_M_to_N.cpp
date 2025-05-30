#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter start and end values: ";
    cin >> m >> n;

    cout << "Even numbers from " << m << " to " << n << " are: ";
    for (int i = m; i <= n; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }

    return 0;
}