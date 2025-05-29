// Write a program that, for each of these sentences, prints the sentence followed by '=' and 
// a boolean expression that evaluates its truth value (so it should print true or false)

// TIP: use "boolalpha" to print true or false instead of 1 or 0

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Three is greater than one = " << boolalpha << (3 > 1) << endl;
	cout << "Four divided by two is less than zero = " << boolalpha << ((4 / 2) < 0) << endl;
	cout << "The character 'zero' is equal to the value zero = " << boolalpha << ('0' == 0) << endl;
	// The next line was incorrect because chaining comparisons like in math doesn't work as expected in C++
	// So, it must be written as: (0 < 10/2) && (10/2 <= 10)
	cout << "Ten halves is between zero (exclusive) and ten (inclusive) = " << boolalpha << ((0 < (10 / 2)) && ((10 / 2) <= 10)) << endl;
	
	// The next line: "Not true that three is greater than two and less than one"
	// The original expression (2 < 3 < 1) doesn't work as intended in C++
	// Correct: !( (3 > 2) && (3 < 1) )
	cout << "It is not true that three is greater than two and less than one = " << boolalpha << !((3 > 2) && (3 < 1)) << endl;

	// "Three less than minus five implies seven greater than 0"
	// Logical implication A => B can be expressed as !A || B
	cout << "Three less than minus five implies seven greater than zero = " << boolalpha << (!(3 < -5) || (7 > 0)) << endl;

	return 0;
}
