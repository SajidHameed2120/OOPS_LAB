// input a 3 digit number and add all its digits
#include <iostream>
using namespace std;

void addDigits()
{
    int num, digit, sum = 0;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    cout << "Sum of digits = " << sum << endl;
}

int main()
{
    addDigits();

    return 0;
}