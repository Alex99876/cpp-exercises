// Write a program that circularly "rotates to the left" the values of three float variables read from input, and prints the values before and after the swap.

#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Enter three values: " << endl;
  cin >> a >> b >> c;
  
  cout << "Variable a is equal to: " << a << endl;
  cout << "Variable b is equal to: " << b << endl;
  cout << "Variable c is equal to: " << c << endl;
  
  float temp; // Temporary variable for swapping values
  temp = a;   // Perform the swap using a temporary variable
  a = b;
  b = c;
  c = temp;
  
  cout << "The new value of a is: " << a << endl;
  cout << "The new value of b is: " << b << endl;
  cout << "The new value of c is: " << c << endl;
  
  return 0;
}