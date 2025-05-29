/* EXERCISE 10 - MY VERSION

Write a program that defines two constant values, M equal to 5 and N equal to 8.
Then declares a two-dimensional array a with dimensions M×N, and fills it with zeros. */

#include <iostream>
using namespace std;

const unsigned int M = 5;
const unsigned int N = 8;

int main()
{
    // Declaration and initialization of the array to 0
    int a[M][N] = {0};
    
    // Outer for loop scans the rows
    // Inner for loop scans the columns
    // Each time 8 zeros (N = 8) have been printed on a row, go to the next line (instruction OUTSIDE the inner for loop)
    
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << a[i][j] << " ";
        }
        
        cout << endl;
    }
    
    return 0; 
}
