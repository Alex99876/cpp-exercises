// EXERCISE 5
// Write a program that reads an integer from input and prints whether or not it is divisible by 13.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    // Check if the number is divisible by 13 and print the result

    if ((a % 13) == 0)
        cout << "The number " << a << " is divisible by 13" << endl;
    else
        cout << "The number " << a << " is not divisible by 13" << endl;

    return 0;
}

