/* EXERCISE 4

Write a program that reads a strictly positive integer n and a character, and prints the character n times. */

#include<iostream>
using namespace std;

int main()
{
	// print the string "Enter a number greater than 0: "
	// declare an int variable len
	// read len
	
	int len;
	cout << "Enter a number greater than 0: ";
	cin >> len;
	
	// if len is not greater than zero
	//- print "I said positive!"
	//- exit the program returning error code 1
	
	if (len < 0)
	{
		cout << "I said positive!" << endl;
		return 1;
		
	}
	
	// print the string "Enter the character to repeat: "
	// declare a char variable c
	// read c
	/* iterate i from 1 to len
		- print c
	*/
	
	char c;
	cout << "Enter the character to repeat: ";
	cin >> c;
	
	for (int i = 1; i <= len; i++)
	{
		cout << c;
	}
	
	cout << endl;
	
	return 0;
}

