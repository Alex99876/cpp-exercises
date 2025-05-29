/* EXERCISE 10
Write a program that defines two constant values, M equal to 5 and N equal to 8. Then declares a two-dimensional array a of
dimensions M×N, and fills it with zeros. */

#include <iostream>
using namespace std;

const unsigned int M = 5;
const unsigned int N = 8;

int main()
{
    int a[M][N];
    
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = 0;
            
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
