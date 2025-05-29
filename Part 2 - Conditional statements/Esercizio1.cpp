// Write a program that reads two characters and prints the string "Equal" if they are the same character,
// and the string "Different" if they are two different characters.

#include <iostream>
using namespace std;

int main()
{
	// Declare two variables a and b of type char
	char a, b;
	
	// Read a and b
	cout << "Enter two char variables: ";
	cin >> a >> b;
	
	// If a and b are equal print the string "Equal"
	// otherwise print the string "Different"
	
	if (a == b) // boolean expression: true equals 1, false equals 0
		cout << "Equal" << endl; // with only one statement braces {} can be omitted
	else
		cout << "Different" << endl;
	
	return 0;
}