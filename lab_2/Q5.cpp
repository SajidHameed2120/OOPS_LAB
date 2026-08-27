//Original Array: 1 2 3 4 5
//Reverse Array:  5 4 3 2 1

#include <iostream>
using namespace std;

void reverseArray()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n], reverse[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        reverse[i] = arr[n - 1 - i];
    }

    cout << "Original array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Reverse array: ";

    for (int i = 0; i < n; i++)
    {
        cout << reverse[i] << " ";
    }
}

int main()
{
    reverseArray();

    return 0;
}