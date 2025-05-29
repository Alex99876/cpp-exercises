/*

Write a program that asks the user for a real number and reads it. Then it asks the user to try to guess its 
square root, and if the user inputs the correct value it says "Well done!" and exits, otherwise it keeps asking 
the user to try again until they guess correctly.

To test this program, use the value 25.3268614564 whose square root is 5.03258 (if you prefer other values, it’s 
better to start from a number with decimal digits and square it, in order to avoid approximation errors caused 
by truncation). 

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n;
	
	cout << "Enter a real number: ";
	cin >> n;
	cout << endl;
	
	double guess;
	
	do
	{
		cout << "Guess its square root: ";
		cin >> guess;
		
		if (guess == sqrt(n))
			cout << "Well done! You guessed it." << endl;
		else if (guess < sqrt(n))
		{
			cout << "The square root is bigger. Try again." << endl;
			cout << endl;
		}
		else
		{	
			cout << "The square root is smaller. Try again." << endl;
			cout << endl;
		}
		
	}
	while (sqrt(n) != guess);
	
	return 0;

}
