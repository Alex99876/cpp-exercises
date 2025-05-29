/* EXERCISE 11

Write a program that defines a constant value, N equal to 10.
Then declares a two-dimensional array multiplicationTable of size N×N, and fills it with the multiplication table values,
where the element (i, j) contains the product of (i+1) and (j+1) (why?).
Finally, it asks the user for a pair of values between 1 and 10, and returns their product – obtained by consulting the
multiplication table as a look-up table, rather than performing the multiplication. */

#include <iostream>
using namespace std;

const int N = 10;

int main()
{
    int multiplicationTable[N][N];
    
    // Fill the array
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            multiplicationTable[i][j] = (i + 1) * (j + 1);
    
    int val1, val2;
    
    // Check that the entered numbers are within the valid range
    do
    {
        cout << "Enter a pair of values between 1 and 10: ";
        cin >> val1 >> val2;
    }
    while (val1 < 1 || val2 < 1 || val1 > 10 || val2 > 10);
    
    // Print the product by retrieving the value from the array; subtract 1 because arrays start at index 0
    cout << val1 << " * " << val2 << " = " << multiplicationTable[val1 - 1][val2 - 1] << endl;
    
    return 0;
}
