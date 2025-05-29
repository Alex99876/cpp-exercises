#include <iostream>
#include <string>

using namespace std;

const int N = 10;

struct Data
{
    int g, m, a; // day, month, year
};

struct Student
{
    string nome;
    Data datanascita;
};

int main()
{
    // Declare an array of Students
    Student studenti[N];

    // Example: set the birth date of student number 3 (index 3)
    studenti[3].datanascita.a = 1995;  // year
    studenti[3].datanascita.m = 7;     // month
    studenti[3].datanascita.g = 21;    // day
    studenti[3].nome = "Marco Rossi";

    // Access and print the year of birth of student 3
    cout << "Student 3 (" << studenti[3].nome << ") was born in year: "
         << studenti[3].datanascita.a << endl;

    return 0;
}
