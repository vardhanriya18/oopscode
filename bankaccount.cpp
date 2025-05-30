#include <iostream>
using namespace std;

class BankAccount {
public:
    int account_number;
    string account_holder_name;
    float balance;

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Account No: " << account_number << endl;
        cout << "Name: " << account_holder_name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.account_number = 12345;
    acc.account_holder_name = "Rahul";
    acc.balance = 1000;

    acc.deposit(500);
    acc.withdraw(300);
    acc.display();

    return 0;
}