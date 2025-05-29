/* EXERCISE 8
Write a function that, given a strictly positive integer as an argument,
prints a right-angled triangle made of '*' with sides as long as the given number.
For example, if the argument is 5, it will print:

*
**
***
****
*****

*/

#include <iostream>

using namespace std;

void triangle(int);

int main()
{
    int len;
    cout << "Enter a number greater than 0: ";
    cin >> len;

    if (len > 0)
        triangle(len);
    else
        cout << "Error" << endl;
}

void triangle(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
}
