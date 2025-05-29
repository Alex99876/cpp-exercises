// EXERCISE 3 - FOR LOOP

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
	... while i is greater than 1
	- assign to F the product of F and i */
	
	int F = n;
			
	for (int i = n -1; i > 1; i--)
	{
		F = F * i;

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


