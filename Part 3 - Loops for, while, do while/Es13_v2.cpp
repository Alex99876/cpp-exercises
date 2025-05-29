/* Write a program that asks the user for a positive integer n and prints a diamond (rhombus) of asterisks (*). The longest row (the middle one) contains exactly 2 * n + 1 asterisks. */

         *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************
 ***************
  *************
   ***********
    *********
     *******
      *****
       ***
        *

#include <iostream>
using namespace std;

int main()
{
    int n;

    // Ask the user to enter a positive number
    do
    {
        cout << "Enter a positive number: ";
        cin >> n;
    }
    while (n < 0);

    // UPPER HALF of the diamond (excluding the middle row)
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = i; j < n + 1; j++)
        {
            cout << " ";
        }

        // Print left half of the asterisks (1 less than i)
        for (int j = 1; j < i; j++)
        {
            cout << "*";
        }

        // Print right half of the asterisks (same as i)
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // LOWER HALF of the diamond (including the middle row)
    for (int i = 1; i <= n + 1; i++)
    {
        // Print leading spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }

        // Print left half of asterisks
        for (int j = i; j < n + 1; j++)
        {
            cout << "*";
        }

        // Print right half of asterisks
        for (int j = i; j <= n + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
