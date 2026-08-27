// add all numbers 1 to N
#include <iostream>
using namespace std;

void addNumbers()
{
    int n, sum = 0;

    cout << "Enter the value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum from 1 to " << n << " = " << sum << endl;
}

int main()
{
    addNumbers();

    return 0;
}