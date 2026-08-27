// find binary equivalent using array
#include <iostream>
using namespace std;

void findBinary()
{
    int num, binary[32], i = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Binary equivalent = 0";
        return;
    }

    while (num > 0)
    {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "Binary equivalent = ";

    for (int j = i - 1; j >= 0; j--)
    {
        cout << binary[j];
    }
}

int main()
{
    findBinary();

    return 0;
}