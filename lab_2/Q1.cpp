//armstrong number 153 = 1^3 + 5^3 + 3^3 =153
#include <iostream>
using namespace std;

void checkArmstrong()
{
    int num, originalNum, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";
}

int main()
{
    checkArmstrong();

    return 0;
}