// Write a program that reads an integer and prints its absolute value 
// (that is, the number without the sign; for example, if I read -7, I should print 7).

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    cout << "The absolute value of the number is: ";

    if (a < 0)
        cout << -a << endl; // I think using abs(a) would also be fine
    else 
        cout << a << endl;

    return 0;

    // ALTERNATIVE WITHOUT IF
    // cout << "The absolute value of the number is: " << abs(a) << endl;

    // ALTERNATIVE 2
    // if (a < 0)
    //     cout << "The absolute value of the number is: " << abs(a) << endl;
    // else 
    //     cout << "The number " << a << " is positive" << endl;
}

