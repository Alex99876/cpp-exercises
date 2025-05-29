/* EXERCISE 15

Write a program that asks the user for an integer and checks if it is a palindrome, 
meaning its digits (in base 10) read from right to left match the digits read from left to right 
(for example, 165373561 is a palindrome). After the check, the program prints the result to the user. */

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter a number: ";
	cin >> n;
	
	cout << "Reversing " << n;
	
	int num = n; // use a temporary variable to store the entered number and use it for the calculations
	int inv = 0; // declare a variable to store the reversed number
	
	while (num < 0 || num > 0)
	{
		int mod = num % 10;
		num = num / 10;
		inv = inv * 10;
		inv = inv + mod;	
	}

	cout << " you get: " << inv << endl;
	
	if (n == inv)
		cout << "The number is a palindrome." << endl;
	else 
		cout << "The number is not a palindrome." << endl;
	
	return 0;
}
