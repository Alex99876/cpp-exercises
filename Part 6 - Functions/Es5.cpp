#include <iostream>
using namespace std;

struct Date
{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

// Function to check if a year is leap year
bool isLeapYear(unsigned int year)
{
    return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
}

// Function to validate the date
bool isValidDate(const Date& d)
{
    if (d.year < 1000) return false;  // Arbitrary lower limit on year
    if (d.month < 1 || d.month > 12) return false;
    if (d.day < 1) return false;

    // Days in month considering leap years
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear(d.year))
        daysInMonth[1] = 29;  // February has 29 days if leap year

    if (d.day > (unsigned int)daysInMonth[d.month - 1]) return false;

    return true;
}

int main()
{
    Date data;

    // Loop until a valid date is entered
    do
    {
        cout << "Enter year: ";
        cin >> data.year;
        cout << "Enter month: ";
        cin >> data.month;
        cout << "Enter day: ";
        cin >> data.day;

        if (!isValidDate(data))
            cout << "Invalid date! Please enter again." << endl;

    } while (!isValidDate(data));

    // Define today's date (fixed for this example)
    Date today = {10, 8, 2022};  // 10 Aug 2022

    // Compare the input date with today
    if (data.year > today.year)
        cout << "The entered date is in the future." << endl;
    else if (data.year < today.year)
        cout << "The entered date is in the past." << endl;
    else  // same year
    {
        if (data.month > today.month)
            cout << "The entered date is in the future." << endl;
        else if (data.month < today.month)
            cout << "The entered date is in the past." << endl;
        else // same month
        {
            if (data.day > today.day)
                cout << "The entered date is in the future." << endl;
            else if (data.day < today.day)
                cout << "The entered date is in the past." << endl;
            else
                cout << "The entered date is today." << endl;
        }
    }

    return 0;
}
