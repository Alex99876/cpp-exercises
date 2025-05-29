// EXERCISE 6

// Write a program that checks if three real numbers given as input can be the sides of a triangle,
// that is, none of them is greater than the sum of the other two or less than the absolute value of their difference.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    // Check if the entered numbers can be the sides of a triangle
    // Also verify that the values are greater than 0 before proceeding
    
    if (a > 0 && b > 0 && c > 0)
    {
        if ((a + b > c) && (b + c > a) && (c + a > b))
            cout << "The entered numbers can be the sides of a triangle" << endl;
        else
            cout << "The entered numbers cannot be the sides of a triangle" << endl;
    }
    else 
        cout << "The entered numbers cannot be the sides of a triangle" << endl;
    
    return 0;
}

