#include <iostream>
using namespace std;

class Ledger {
public:
    void showBalance() {
        cout << "Displaying account balance..." << endl;
    }
};

class SavingsAccount : public Ledger {
public:
    void calculateInterest() {
        cout << "Calculating savings interest..." << endl;
    }
};

class CheckingAccount : public Ledger {
public:
    void issueCheque() {
        cout << "Processing cheque..." << endl;
    }
};

int main() {
    SavingsAccount savings;
    CheckingAccount checking;

    cout << "Savings Account:" << endl;
    savings.showBalance();
    savings.calculateInterest();

    cout << "\nChecking Account:" << endl;
    checking.showBalance();
    checking.issueCheque();

    return 0;
}