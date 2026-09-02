//Generate Fibonacci series of n numbers, where n is input from keyboard, using a default constructor.
#include <iostream>
using namespace std;

class Fibonacci
{
    int n;

public:
    // Default constructor
    Fibonacci()
    {
        cout << "Enter the number of terms: ";
        cin >> n;
    }

    void generate()
    {
        int a = 0, b = 1, next;

        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; i++)
        {
            cout << a << " ";

            next = a + b;
            a = b;
            b = next;
        }

        cout << endl;
    }
};

int main()
{
    Fibonacci f;
    f.generate();

    return 0;
}