/* EXERCISE 8 version 2

Write a program that asks the user for a number and prints the number obtained by reading the given number from right to left. For example, with -17 it prints +71. */

#include<iostream>
using namespace std;

int main()
{
	int k;
	
	cout << "Enter a number: ";
	cin >> k;
	
	// print on a new line the string "Reversing " followed by k
	// declare an integer variable inv initialized to zero
	/* while k is greater than zero or k is less than zero
		- declare an integer variable mod initialized with the remainder of the integer division of k by 10
		- assign to k the quotient of k divided by 10
		- assign to inv the multiplication of inv by 10
		- assign to inv the sum of inv and mod
	*/
	// print the string " results in " followed by inv
	
	cout << "Reversing " << k << endl;
	
	int inv = 0;
	
	while (k < 0 || k > 0)
	{
		int mod = k % 10;
		k = k / 10;
		inv = inv * 10;
		inv = inv + mod;
	}
	
	cout << " results in " << inv << endl;
	
	return 0;
}
