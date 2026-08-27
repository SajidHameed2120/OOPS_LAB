//input a number and find its reverse using do while
#include <iostream>
using namespace std;

void reverseNumber()
{
    int num, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    do
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    while (num > 0);

    cout << "Reverse of number = " << reverse << endl;
}

int main()
{
    reverseNumber();

    return 0;
}