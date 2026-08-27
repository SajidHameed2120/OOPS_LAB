// input radius of circle and find its area and circumfence 
#include <iostream>
using namespace std;

void circle()
{
    float radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    cout << "Area of circle = " << area << endl;
    cout << "Circumference of circle = " << circumference << endl;
}

int main()
{
    circle();

    return 0;
}