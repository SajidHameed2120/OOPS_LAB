#include <iostream>
#include <iomanip>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}

int getFirstDay(int year) {
    int day = 1;
    for (int y = 1; y < year; y++) {
        day += isLeapYear(y) ? 366 : 365;
    }
    return day % 7;
}

int main() {
    int year;
    cout << "Enter year: ";
    cin >> year;

    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    if (isLeapYear(year)) {
        days[1] = 29;
    }

    int firstDay = getFirstDay(year);

    for (int m = 0; m < 12; m++) {
        cout << "\n\n       " << months[m] << " " << year << "\n";
        cout << " Sun Mon Tue Wed Thu Fri Sat\n";

        for (int i = 0; i < firstDay; i++) {
            cout << "    ";
        }

        for (int d = 1; d <= days[m]; d++) {
            cout << setw(4) << d;

            if ((firstDay + d) % 7 == 0) {
                cout << '\n';
            }
        }

        firstDay = (firstDay + days[m]) % 7;
    }

    cout << '\n';
    return 0;
}