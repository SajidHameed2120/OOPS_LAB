/*. WAP to input an array of n elements and add all the elements*/
#include <iostream>
using namespace std;

void addArrayElements()
{
    int n, sum = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of all elements = " << sum << endl;
}

int main()
{
    addArrayElements();

    return 0;
}