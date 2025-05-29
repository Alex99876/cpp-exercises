/* EXERCISE 13

Write a function with two integer parameters that prints a right trapezoid made of 'x' characters,
with the bases having lengths equal to the two arguments, and the height equal to the difference between the bases plus one.
For example, given 5 and 9, it will print:

xxxxx
xxxxxx
xxxxxxx
xxxxxxxx
xxxxxxxxx

(which has height 5 = 9 - 5 + 1). Note that given the choice of height, each row prints one more character than the previous.
[HINT: use a replicate function.]

*/

#include <iostream>

using namespace std;

void PrintTrapezoid(int smallerBase, int largerBase);

int main()
{
    int larger, smaller;

    cout << "Enter the larger base: ";
    cin >> larger;
    cout << "Enter the smaller base: ";
    cin >> smaller;

    if (larger > 0 && smaller > 0 && larger > smaller)
    {
        PrintTrapezoid(smaller, larger);
    }
    else
    {
        cout << "Error: base value is negative or invalid." << endl;
    }
}

void PrintTrapezoid(int smallerBase, int largerBase)
{
    for (int i = smallerBase; i <= largerBase; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "x";
        }
        cout << endl;
    }
}
