#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Enter an alphabet: ";
    cin >> c;

    switch(tolower(c)) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << c << " is a vowel.";
            break;
        default:
            cout << c << " is a consonant.";
    }

    return 0;
}