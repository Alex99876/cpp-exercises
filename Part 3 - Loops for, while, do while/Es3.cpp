// EXERCISE 3

// Write a program that calculates the factorial of a number requested from the user. 
// The factorial of a number is defined by induction as 0! = 1 and (n + 1)! = (n + 1) * n!
// For example, 3! = (2 + 1)! = 3 * 2! = 3 * (1 + 1)! = 3 * 2 * 1! = 3 * 2 * (0 + 1)! = 3 * 2 * 1 * 0! = 3 * 2 * 1 * 1. 
// In general n! = n * (n - 1) * (n - 2) * ... * 1.

#include<iostream>
using namespace std;

int main()
{
	// print the string "Enter a positive number: "
	// declare an integer variable n
	// read n
	// if n is less than zero
	// - print "I said positive!"
	// - exit the program returning error code 7
	
	int n;
	cout << "Enter a positive number: ";
	cin >> n;
	
	if (n < 0)
	{
		cout << "I said positive!" << endl;
		return 7;
	}
	
	// declare an integer variable F initialized to n
	/* iterate with an integer variable i initialized to n-1 and decreasing by 1...
	... as long as i is greater than 1
	- assign to F the product of F and i */
	
	int F = n;
	int i = (n - 1);
			
	while(i > 1)
	{
		F = F * i;
		i--;

	}
	
		// if F is zero
		// - print "The factorial of 0 is 1"
		// otherwise
		// - print "The factorial of " followed by n, followed by " is " followed by F
	
	if (F == 0)
		cout << "The factorial of 0 is 1" << endl;
		
	else
		cout <<"The factorial of " << n << " is " << F << endl;
	
	return 0;

}


