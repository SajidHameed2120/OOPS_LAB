//Armstrong number using Copy Constructor
#include <iostream>
using namespace std;

class Armstrong
{
    int num;

public:
    // Parameterized constructor
    Armstrong(int n)
    {
        num = n;
    }

    // Copy constructor
    Armstrong(const Armstrong &obj)
    {
        num = obj.num;
    }

    void checkArmstrong()
    {
        int original = num;
        int temp = num;
        int digit, sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }

        if (sum == original)
            cout << original << " is an Armstrong number." << endl;
        else
            cout << original << " is not an Armstrong number." << endl;
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Armstrong a1(n);

    // Copy constructor is called
    Armstrong a2(a1);

    a2.checkArmstrong();

    return 0;
}