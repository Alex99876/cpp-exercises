// Write a program that reads a strictly positive integer and prints a right triangle made of '*' with
// the side length equal to the input number. For example, for 5 it will print:
// *
// **
// ***
// ****
// *****

#include<iostream>
using namespace std;

int main()
{
	// print the string "Enter a number greater than 0: "
	// declare an int variable length
	// read length
	
	int length;
	cout << "Enter a number greater than 0: ";
	cin >> length;

	for (int i = 1; i <= length; i++) 		// iterate i from 1 to length - these are the ROWS
	{
		for (int j = 1; j <= i; j++)		// iterate j from 1 to i - these are the COLUMNS
		{
			cout << "*";
		}
		
		cout << endl; 						// print '*'
	}
	
	return 0;	
}
