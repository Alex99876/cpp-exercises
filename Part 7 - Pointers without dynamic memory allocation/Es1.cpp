#include <iostream>
#include <string>

using namespace std;

const int N = 10;

struct Date
{
    int day, month, year; // day, month, year
};

struct Student
{
    string name;
    Date birthdate;
};

int main()
{
    // Declare an array of Students
    Student students[N];

    // Example: set the birthdate of student number 3 (index 3)
    students[3].birthdate.year = 1995;
    students[3].birthdate.month = 7;
    students[3].birthdate.day = 21;
    students[3].name = "Marco Rossi";

    // Access and print the birth year of student 3
    cout << "Student 3 (" << students[3].name << ") was born in year: "
         << students[3].birthdate.year << endl;

    return 0;
}
