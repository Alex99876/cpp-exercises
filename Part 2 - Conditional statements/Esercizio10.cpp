// EXERCISE 10: Write a program that reads an integer Temp from input and prints:

// • "Freezing cold" if Temp is between -20 and 0 (inclusive)
// • "Cold" if Temp is between 1 and 15 (inclusive)
// • "Normal" if Temp is between 16 and 23 (inclusive)
// • "Hot" if Temp is between 24 and 30 (inclusive)
// • "Deadly hot" if Temp is between 31 and 40 (inclusive)
// • "I don’t believe it, the thermometer must be broken" if Temp is above 40 or below -20

#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter an integer temperature: ";
    cin >> temp;

    if (temp >= -20 && temp <= 0)
        cout << "Freezing cold" << endl;
    else if (temp >= 1 && temp <= 15)
        cout << "Cold" << endl;
    else if (temp >= 16 && temp <= 23)
        cout << "Normal" << endl;
    else if (temp >= 24 && temp <= 30)
        cout << "Hot" << endl;
    else if (temp >= 31 && temp <= 40)
        cout << "Deadly hot" << endl;
    else
        cout << "I don’t believe it, the thermometer must be broken" << endl;

    return 0;
}

