/* EXERCISE 7

Write a program that asks the user for positive integers and prints on a new line as many '|' as the number's size (like the sticks in kindergarten), until the user wants to stop. */

#include <iostream>
using namespace std;

int main()
{
	// declare a variable answer of type char
	char answer;
	
	/* repeat
	- print the string "enter a positive integer"
	- declare a variable n of type int
	- read n
	- iterate over an integer variable i from 1 to n
	-- print '|'
	- print a newline
	- print on a new line the string
	"enter s or S to stop, any other character to continue"
	- read answer
	until answer is different from both 's' and 'S' */
	// print the string "I stopped because you entered " followed by answer
	
	do
	{
		int n;
		cout << "Enter a positive integer: ";
		cin >> n;
		
		for (int i = 1; i <= n; i++)
			cout << "|";
		cout << endl;
		
		cout << "Enter s or S to stop, any other character to continue." << endl;
		cin >> answer;
	}
	while (answer != 's' && answer != 'S');
	
	cout << "I stopped because you entered: " << answer << endl;
	
	return 0;
}

// What happens if you enter a negative number and why?
/* It does not enter the for loop at all because i is initialized to 1 and the loop condition is i <= n,
1 can never be less than or equal to a negative number, so it immediately skips to the next print statement. */