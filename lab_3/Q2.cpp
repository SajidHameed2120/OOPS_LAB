/*WAP to input a number and reverse it
Use return and call by argument*/
#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int digit, reverse = 0;

    while (num > 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return reverse;
}

int main()
{
    int num, result;

    cout << "Enter a number: ";
    cin >> num;

    result = reverseNumber(num);

    cout << "Reverse of number = " << result << endl;

    return 0;
}