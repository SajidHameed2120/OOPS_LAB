//Array sum using Constructor, Object Pointer & Friend Function
#include <iostream>
using namespace std;

class Array
{
    int arr[100];
    int n;

public:
    // Constructor
    Array()
    {
        cout << "Enter the number of elements: ";
        cin >> n;

        cout << "Enter the elements:" << endl;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    // Friend function
    friend void findSum(Array *obj);
};

// Friend function using object pointer
void findSum(Array *obj)
{
    int sum = 0;

    for (int i = 0; i < obj->n; i++)
    {
        sum = sum + obj->arr[i];
    }

    cout << "Sum of array elements = " << sum << endl;
}

int main()
{
    // Object
    Array a;

    // Object pointer
    Array *ptr = &a;

    // Calling friend function using object pointer
    findSum(ptr);

    return 0;
}