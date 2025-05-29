// Write a program that reads two integers and prints their average (as a real number).
// For example, input 1 and 2 should print 1.5

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter the first integer: ";
	cin >> a;
	
	cout << "Enter the second integer: ";
	cin >> b;
	
	float average = static_cast<float>(a + b) / 2; // convert a and b to float; see alternatives below
	cout << "The average is: " << average << endl;
	
	return 0;
	
	// ALTERNATIVE 1
	// int a, b;
	// float average; or double average;
	// cout << "Enter the first integer: ";
	// cin >> a;
	
	// cout << "Enter the second integer: ";
	// cin >> b;
	
	// average = (a + b) / 2.0; // automatic conversion to float/double, simpler method
	// cout << "The average is: " << average << endl;
	
	// ALTERNATIVE 2
	// average = float(a) + float(b) / 2; // converts a and b to float/double
	// cout << "The average is: " << average << endl;
}
