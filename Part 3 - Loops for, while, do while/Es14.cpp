/* Write a program that asks the user to choose their favorite color by presenting a menu with at least 5 color options, where each color name starts with a different letter (for example: red, green, blue, yellow, and orange).
To make a selection, the user can enter the initial letter of the chosen color, either uppercase or lowercase.
If the character entered does not match any of the proposed colors, the program will start over and display the menu again.. */

/* EXERCISE 14

Write a program that asks the user to choose their favorite color by presenting a menu with at least 5 color options,
each starting with a different letter (e.g., red, green, blue, yellow, and orange). 
To make a selection, the user can use the initial letter of the chosen color, either uppercase or lowercase.
If the entered character does not match any of the proposed colors, the program will start over and display the menu again. */

#include<iostream>
using namespace std;

int main()
{
	char risp;
	
	do
	{
		cout << "Enter the initial of your favorite color among:" << endl;
		cout << "Red, Green, Blue, Yellow, and Orange." << endl;
	
		cin >> risp;
		
		if (risp == 'R' || risp == 'r')
			cout << "Your favorite color is red." << endl;
		else if (risp == 'V' || risp == 'v')
			cout << "Your favorite color is green." << endl;
		else if (risp == 'B' || risp == 'b')
			cout << "Your favorite color is blue." << endl;
		else if (risp == 'G' || risp == 'g')
			cout << "Your favorite color is yellow." << endl;
		else if (risp == 'A' || risp == 'a')
			cout << "Your favorite color is orange." << endl;
		else
			cout << "Invalid input." << endl;

		cout << endl;
	}
	while (risp != 'R' && risp != 'r' &&
	       risp != 'V' && risp != 'v' &&
	       risp != 'B' && risp != 'b' &&
	       risp != 'G' && risp != 'g' &&
	       risp != 'A' && risp != 'a');
	
	return 0;
}
