/* EXERCISE 3

readFloatArray, Read an array of floats from keyboard. Write a program similar to the previous one, but that works on arrays of floats. */

#include <iostream>
using namespace std;

const unsigned int N = 10;

int main()
{
    // Declare an array a of N floats
    float a[N];
    
    // Iterate on the integer variable i starting from 0 up to N (excluded):
    // Declare a float variable val
    // Print the message composed of:
    //
    //  - the string "Value no. "
    //  - the value of i
    //  - the separator ": "
    // Read from input a value into val
    // Assign the i-th element of a the value of val
    
    for (int i = 0; i < N; ++i)
    {
        float val;
        cout << "Value no. " << i << " : ";
        cin >> val;
        a[i] = val;
    }
    
    return 0;
}
