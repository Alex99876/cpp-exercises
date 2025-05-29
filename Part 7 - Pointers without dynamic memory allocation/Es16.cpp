/* EXERCISE 16
Write a function with an integer parameter n that prints a diamond of asterisks with 2*n+1 characters on its diagonal.
For example, given 8, it prints:

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

which has 17 characters on the diagonal.
[HINT: 1) It's easier to print the diamond with two loops, the first for the rows where the number of asterisks grows,
and the second for the rows where the number of asterisks decreases.]
*/

#include <iostream>

using namespace std;

void PrintDiamond(int);

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    PrintDiamond(num);
}

void PrintDiamond(int n)
{
    int max = 2 * n + 1;

    // Upper part of diamond (including middle line)
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j < max; ++j)
        {
            if (j >= n - i && j <= n + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // Lower part of diamond
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < max; ++j)
        {
            if (j >= i && j < max - i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
