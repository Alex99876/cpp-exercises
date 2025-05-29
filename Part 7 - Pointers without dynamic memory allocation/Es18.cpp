/* EXERCISE 18

Write a function with two real arguments x and sqrt_x that returns a boolean, true if sqrt_x is the square root of x, 
meaning if the square of sqrt_x matches x within a tolerance.
To test the function, use the values 25.3268614564 whose square root is approximately 5.03258.
(If you prefer other values, start with a number with decimal digits and square it to avoid approximation errors due to truncation.) */

#include <iostream>
#include <cmath>

using namespace std;

bool sqrt_check(double x, double sqrt_x);
void printMessage(double x, double y, bool z);

const double TOL = 1e-7;  // tolerance

int main()
{
    double a = 25.3268614564;
    double b = 5.03258;

    printMessage(a, b, sqrt_check(a, b));

    // Alternative debug print:
    // cout << b << " is the square root of " << a << "?" << endl;
    // cout << boolalpha << sqrt_check(a, b) << endl;
}

bool sqrt_check(double x, double sqrt_x)
{
    // Check if the square of sqrt_x is approximately equal to x within tolerance
    return fabs(x - sqrt_x * sqrt_x) < TOL;
}

void printMessage(double x, double y, bool result)
{
    cout << y << " is the square root of " << x << "? " << boolalpha << result << endl;
}
