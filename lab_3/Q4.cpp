/*WAP to input a 3 × 3 matrix and display the upper triangle*/
#include <iostream>
using namespace std;

void upperTriangle()
{
    int matrix[3][3];

    cout << "Enter 9 elements of the 3x3 matrix:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nUpper Triangle:\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j >= i)
                cout << matrix[i][j] << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}

int main()
{
    upperTriangle();

    return 0;
}