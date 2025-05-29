/* EXERCISE 5

Write a program that, given a float array a containing descending values, its length N, and an integer value i between 0 and N,
stores in the i-th element the value 1/2 * i^2. Then print the array. */

#include <iostream>
using namespace std;

const unsigned int N = 10;

int main()
{
    // create float array
    // for i from 0 inclusive to N exclusive:
    // assign to the i-th element of a the value N - i
    // read from input a value of i
    // write in the i-th element of a the value i squared divided by two
    // print the array (see previous algorithm)
    
    float a[N];
    int i;
    
    for (i = 0; i < N; ++i)
        a[i] = N - i;
    
    cout << "Enter an index of an element from 0 to " << N - 1 << endl;
    cin >> i;
    a[i] = i * i / 2.0;
    
    // PRINT THE ARRAY
    for (i = 0; i < N; ++i)
        cout << a[i] << " ";
    
    return 0;
}
