#include <iostream>
using namespace std;

int main()
{
    int base1, base2;

    // Input: strictly positive integers
    do
    {
        cout << "Enter two strictly positive numbers: ";
        cin >> base1 >> base2;
    }
    while (base1 <= 0 || base2 <= 0);

    // Ensure base1 is the smaller one
    if (base1 > base2)
        swap(base1, base2);

    int height = base2 - base1 + 1;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < base1 + i; j++)
        {
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}
