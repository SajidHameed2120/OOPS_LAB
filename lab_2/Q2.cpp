// palindrome
#include <iostream>
using namespace std;

void checkPalindrome()
{
    int num, originalNum, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (originalNum == reverse)
        cout << originalNum << " is a Palindrome number.";
    else
        cout << originalNum << " is not a Palindrome number.";
}

int main()
{
    checkPalindrome();

    return 0;
}