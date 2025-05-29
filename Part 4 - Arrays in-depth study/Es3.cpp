/* EXERCISE 3

readIntArray, Read an array of ints from keyboard. Write a program that declares an array v of N integers and “fills” it
reading values from input.

readFloatArray, Read an array of floats from keyboard. Write a program similar to the previous one, but that works on
arrays of floats. */

#include <iostream>
using namespace std;

const unsigned int N = 10;

int main()
{
    // Declare an array a of N integers
    int a[N];
    
    // Iterate on the integer variable i starting from 0 up to N (excluded):
    // Declare an integer variable val
    // Print the message composed of:
    //
    //  - the string "Value no. "
    //  - the value of i
    //  - the separator ": "
    // Read from input a value into val
    // Assign the i-th element of a the value of val
    
    for (int i = 0; i < N; ++i)
    {
        int val;
        cout << "Value no. " << i << " : ";
        cin >> val;
        a[i] = val;
    }
    
    return 0;
}
