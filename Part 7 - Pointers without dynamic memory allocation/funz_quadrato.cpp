// EXERCISE 
// In C++, there is no operator to calculate powers (like the square of a number).
// Create a function that calculates the square of a number.

#include <iostream>
#include <cmath>

using namespace std;

double square(double);

int main()
{
    // To verify that the function works correctly, use the Pythagorean theorem
    double leg1 = 3;
    double leg2 = 4;
    double hypotenuse = sqrt(square(leg1) + square(leg2));

    cout << "The triangle with legs of length " << leg1 << " and " << leg2;
    cout << " has a hypotenuse of length " << hypotenuse << endl;

    return 0;
}

double square(double x)
{
    return x * x;
}
