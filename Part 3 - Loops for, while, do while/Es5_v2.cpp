// Write a program that reads a strictly positive integer and prints a right triangle made of '*' 
// with the side length equal to the input number. For example, for 5 it will print:
// *
// **
// ***
// ****
// *****

#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Enter a number greater than 0: ";
        cin >> num;

        if (num <= 0)
            cout << "Error: number must be greater than 0. Try again." << endl;

    } while (num <= 0);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
