/* EXERCISE 10

Write a program that asks the user for a positive integer and prints the number of its digits (in base 10).
For example, with 27458 it prints 5. */

/* To find out how many digits a number has, I need to divide it by 10 and keep track of how many times
   I divided it by 10, until I get 0 as a result. The number of times it was divided will be the number of digits.

   Example: 2/10 = 0.2 -> as an integer it returns 0, I divided once → the number has 1 digit.
            12/10 = 1.2 -> divided by 10 once → 1.2/10 = 0.12, gives 0 → divided 2 times in total.
            123/10 = 12.3 → 12.3/10 = 1.23 → 1.23/10 = 0.123 → divided 3 times → number has 3 digits.
   
Note: Declaring with "int", if I input numbers longer than 11 digits, it will return only 10 digits.
To allow printing the number of digits for numbers longer than 11 digits, I must declare `n` as `long int`. */

#include <iostream>
using namespace std;

int main()
{
	long int n;

	// Check that the number entered by the user is positive.
	do
	{
		cout << "Enter a positive integer: ";
		cin >> n;
	}
	while (n < 0);

	// Declare the counter variable, and one to keep track of division results
	int count = 0;
	long int res = n; // define this variable so the original number isn't overwritten, can use `n` later
	
	while (res != 0)
	{
		res = res / 10;
		count++;
	}

	// Check input: if 0 is entered, print that it has one digit. Otherwise, print the total digits.
	if (n == 0)
		cout << n << " has one digit." << endl;
	else
		cout << "The number " << n << " has " << count << " digits." << endl;

	return 0;
}
