/* VARIABLE SWAP EXERCISE

Initial situation:
a contains the value x
b contains the value y

Final result:
a contains the value y
b contains the value x

ask the user to enter a value for variable a  
declare an int variable a  
read a

ask the user to enter a value for variable b  
declare an int variable b  
read b

print a newline followed by the string "a is " and the value of a  
print a newline followed by the string "b is " and the value of b  
swap the values of a and b: to do this, we need a temporary variable c

declare an int variable c initialized with the value of a  
assign to a the value of b  
assign to b the value of c, i.e., the initial value of a  
print a newline followed by the string "a is " and the value of a  
print a newline followed by the string "b is " and the value of b
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Type the value of a: ";
	cin >> a;

	cout << "Type the value of b: ";
	cin >> b;
	
	cout << "The value of a is " << a << " and the value of b is " << b << endl;

	c = a; // assign the value of A to variable C. Now C has the same value as A
	a = b; // put the value of B into A
	b = c; // put the value of C (which contains the original value of A) into B
	
	cout << "We have swapped the value of a and b. Now a is " << a << " and b is " << b << endl;
}