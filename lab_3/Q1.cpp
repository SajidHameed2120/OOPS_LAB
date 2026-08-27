/*WAP to read employee information from keyboard and display it

Information:

Name
Employee number
Salary
Designation
Year of experience
Age*/
#include <iostream>
#include <string>
using namespace std;

void employeeDetails()
{
    string name, designation;
    int empNo, experience, age;
    float salary;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter employee number: ";
    cin >> empNo;

    cout << "Enter salary: ";
    cin >> salary;

    cin.ignore();

    cout << "Enter designation: ";
    getline(cin, designation);

    cout << "Enter years of experience: ";
    cin >> experience;

    cout << "Enter age: ";
    cin >> age;

    cout << "\n--- Employee Details ---\n";
    cout << "Name: " << name << endl;
    cout << "Employee Number: " << empNo << endl;
    cout << "Salary: " << salary << endl;
    cout << "Designation: " << designation << endl;
    cout << "Years of Experience: " << experience << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    employeeDetails();

    return 0;
}