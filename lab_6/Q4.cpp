
#include <iostream>
using namespace std;

class Ledger {
protected:
    double balance;

public:
    Ledger(double b) {
        balance = b;
    }

    void displayBalance() {
        cout << "Account Balance: " << balance << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    SavingsAccount(double b) : Ledger(b) {}

    void calculateInterest() {
        cout << "Savings Interest: " << balance * 0.05 << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    CheckingAccount(double b) : Ledger(b) {}

    void displayAccountType() {
        cout << "Account Type: Checking Account" << endl;
    }
};

int main() {
    SavingsAccount s(10000);
    CheckingAccount c(5000);

    cout << "Savings Account" << endl;
    s.displayBalance();
    s.calculateInterest();

    cout << endl;

    cout << "Checking Account" << endl;
    c.displayBalance();
    c.displayAccountType();

    return 0;
}