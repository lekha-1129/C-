#include <iostream>
using namespace std;

class BankAccount {
    int accNo;
    float balance;

public:
    BankAccount(int a, float b) {
        accNo = a;
        balance = b;
        cout << "Account Created: " << accNo << endl;
    }

    BankAccount(const BankAccount &obj) {
        accNo = obj.accNo;
        balance = obj.balance;
        cout << "Account Copied: " << accNo << endl;
    }

    void display() {
        cout << "Account No: " << accNo
             << " Balance: " << balance << endl;
    }

    ~BankAccount() {
        cout << "Account Destroyed: " << accNo << endl;
    }
};

int main() {
    BankAccount a1(1001, 5000);
    BankAccount a2 = a1;

    a1.display();
    a2.display();

    return 0;
}