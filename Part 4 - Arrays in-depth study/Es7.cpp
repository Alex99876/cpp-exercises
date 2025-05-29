/* EXERCISE 7

Write a program that reads N integers into an int array a (see leggiArrayInt). Then, with an appropriate output message,
prints the number P of even numbers contained in the array and the number D of odd numbers (P and D are both integers). */

#include <iostream>
using namespace std;

const unsigned int DIM = 10;

int main()
{
    // Declare array and counters
    int a[DIM];
    int even = 0, odd = 0;
    
    // Fill the array and check if the number is even or odd
    // Declare the local variable "val" inside the for loop so it gets "destroyed" after and saves memory space

    for(int i = 0; i < DIM; ++i)
    {
        // Instead of using a variable "val", I could have used directly cin >> a[i] to populate the array
        int val;
        cout << "Enter a value: ";
        cin >> val;
        a[i] = val;
        
        if (val % 2 == 0)
            even++;
        else
            odd++;
    }
    
    // Print how many even and odd numbers are in the array
    cout << "The even numbers are: " << even << endl;
    cout << "The odd numbers are: " << odd << endl;
    
    return 0;
}
