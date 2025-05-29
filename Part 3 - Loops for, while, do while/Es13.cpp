#include <iostream>
using namespace std;

int main()
{
    int n;

    // Prompt the user until a positive number is entered
    do
    {
        cout << "Enter a positive integer: ";
        cin >> n;
    }
    while (n < 0);

    cout << endl;

    // FIRST PART - Top half of the diamond (excluding the middle row)
    for (int i = 0; i < n; i++) // Rows
    {
        for (int j = 0; j < 2 * n + 1; j++) // Columns
        {
            if (j < n - i || j > n + i)
                cout << " "; // Print space
            else
                cout << "*"; // Print asterisk
        }
        cout << endl;
    }

    // SECOND PART - Bottom half of the diamond (including the middle row)
    for (int i = n; i >= 0; i--) // Rows
    {
        for (int j = 0; j < 2 * n + 1; j++) // Columns
        {
            if (j < n - i || j > n + i)
                cout << " "; // Print space
            else
                cout << "*"; // Print asterisk
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}
