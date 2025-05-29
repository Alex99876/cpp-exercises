/* EXERCISE 2

Write a program that reads uppercase letters until the user inputs a character that is not an uppercase letter and prints the first in alphabetical order.

[HINT: Uppercase letters are represented by consecutive numbers, so to know if a character is an uppercase letter, just check if it is greater than or equal to 'A' and less than or equal to 'Z'.] */

#include <iostream>
using namespace std;

int main()
{
	// declare a char variable first
	// print the string "Enter an uppercase letter"
	char first;
	
	
	/* repeat
	- read first
	- print the string "Enter an uppercase letter"
	while first is less than 'A' or greater than 'Z'
	// Hint: that is, until the user enters an uppercase letter */
	do
	{
		cout << "Inserisci una lettera maiuscola: ";
		cin >> first;
	}
	while (first < 'A' || first > 'Z');
	
	
	// Hint: at this point we know that first is an uppercase letter!
	// declare a char variable c initialized with 'Z'
	// Hint: at this point we know that first <= c!
	char c = 'Z'; // I didn’t understand the sense of initializing it to Z
	
	/* repeat
		- if c is less than first
		-- assign c's value to first
		- print the string "Enter an uppercase letter (or another character to end)"
		- read c
		while c is greater or equal to 'A' and less or equal to 'Z'
	// Hint: that is, as long as the user enters uppercase letters
	// print the string "The smallest letter entered is " followed by first */
	
	do
	{
		if (c < first) // why the check before and not after the input?
			first = c;
			
		cout << "Inserisci una lettera maiuscola (o altro carattere per terminare): " << endl;
		cin >> c;
	}
	while (c >= 'A' && c <= 'Z');
	
	cout << "La lettera più piccola inserita è: " << first << endl;
	
	return 0;
}


