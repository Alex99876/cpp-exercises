// Pointer declaration and memory allocation on the heap
// Pointer arithmetic
// Printing an array

#include <iostream>
using namespace std;

int main()
{
    // Allocate a memory block on the heap to hold 10 integers
    int *p = new int[10];

    // Equivalent notations to assign a value to an array element
    *(p + 2) = 10;  // Assign 10 to the 3rd element (index 2)
    p[4] = 20;      // Assign 20 to the 5th element (index 4)

    // Print the array
    for (int i = 0; i < 10; ++i)
        cout << p[i] << (i == 10 - 1 ? "\n" : " ");

    // IMPORTANT: Free the allocated memory to avoid memory leaks
    delete[] p;

    return 0;
}
