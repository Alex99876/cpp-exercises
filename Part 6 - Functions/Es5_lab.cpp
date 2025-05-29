#include <iostream>
using namespace std;

struct Date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

bool isLeapYear(unsigned int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(const Date& date) {
    if (date.year < 1000) return false;  // year too small (arbitrary)
    if (date.month < 1 || date.month > 12) return false;

    // max days per month
    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (isLeapYear(date.year))
        daysInMonth[1] = 29;

    if (date.day < 1 || date.day > (unsigned int)daysInMonth[date.month - 1])
        return false;

    return true;
}

int main()
{
    Date date;

    cout << "Enter the year: ";
    cin >> date.year;

    cout << "Enter the month: ";
    cin >> date.month;

    cout << "Enter the day: ";
    cin >> date.day;

    if (!isValidDate(date)) {
        cout << "Invalid date!" << endl;
        return 1;
    }

    Date today = {27, 10, 2020};  // October 27, 2020

    if (date.year > today.year) {
        cout << "Future date" << endl;
    }
    else if (date.year < today.year) {
        cout << "Past date" << endl;
    }
    else { // same year
        if (date.month > today.month) {
            cout << "Future date" << endl;
        }
        else if (date.month < today.month) {
            cout << "Past date" << endl;
        }
        else { // same month
            if (date.day > today.day) {
                cout << "Future date" << endl;
            }
            else if (date.day < today.day) {
                cout << "Past date" << endl;
            }
            else {
                cout << "Current date" << endl;
            }
        }
    }

    return 0;
}
