// Write a program that reads three integers and prints them in ascending order, following the proposed algorithm (which specifies some additional details)

#include <iostream>
using namespace std;

int main()
{
    // Ask the user to input three integers
    // Declare three variables a0, a1, and a2 of type int
    // Read a0, a1, and a2

    int a0, a1, a2;
    cout << "Enter three integers: ";
    cin >> a0 >> a1 >> a2;

    // Sort a0, a1, and a2, that is:
    // Declare an integer variable aux initialized with a1
    // If a0 is greater than a1, swap a0 and a1, that is:
    // assign to a1 the value of a0, to a0 the value of aux, and...
    // ... to aux the value of a1 (at this point a0 <= a1 == aux)

    int aux;
    aux = a1;

    if (a0 > a1)
    {
        a1 = a0;
        a0 = aux;
        aux = a1;
    }

    // If a0 is greater than a2
    // - assign to a1 the value of a0, to a0 the value of a2, and...
    // ... to a2 the value of aux
    // Otherwise
    // - if a1 is greater than a2 swap a1 and a2, that is
    // -- assign to a1 the value of a2, to a2 the value...
    // ... of aux (at this point a0 <= a1 <= a2)

    if (a0 > a2)
    {
        a1 = a0;
        a0 = a2;
        a2 = aux;
    }
    else if (a1 > a2)
    {
        a1 = a2;
        a2 = aux;
    }

    // Print the string "The numbers entered, in ascending order, are: "
    // Print the value of a0, followed by the character '<'
    // Print the value of a1, followed by the character '<'
    // Print the value of a2
    // Print a newline

    cout << "The numbers entered, in ascending order, are: " << a0 << " < " << a1 << " < " << a2 << endl;

    return 0;
}

