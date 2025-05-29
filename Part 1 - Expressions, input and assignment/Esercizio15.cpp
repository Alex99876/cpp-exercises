// Write a program that swaps the values of two variables without using a temporary variable.
// TIP: use the XOR operator ^ - can it be used only with integers?

#include <iostream>
using namespace std;

int main()
{
	// Declare variables and ask the user to input the values
	
	int a, b;
	cout << "Enter the value of the first variable: ";
	cin >> a;
	
	cout << "Enter the value of the second variable: ";
	cin >> b;
	
	/* Use the XOR operator to swap variables: XOR compares each bit of the binary values and returns a result depending on whether the bits are equal or different.
	   Example: A = 15 → binary 1111
				B = 9  → binary 1001
				A = A ^ B → 0110, bitwise XOR of 15 and 9
	
	   Knowing B = 1001, compare 0110 with 1001 and get:
	   B = B ^ A → 1111 → 15, which is the original value of A
	   A = A ^ B → 1001 → 9, which is the original value of B
	   
	   Essentially, this performs the XOR truth table on each binary digit step-by-step. */
	
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	
	// Print the swapped variables
	cout << "Swapping the values of the variables: " << endl;
	cout << "The new value of a is: " << a << endl;
	cout << "The new value of b is: " << b << endl;
	
	return 0;
}
