// Write a program that swaps the values of two char variables, read from input, and prints the values before and after the swap

#include <iostream>
using namespace std;

int main()
{
  char a, b;
  cout << "Enter the first character: ";
  cin >> a;
  
  cout << "Enter the second character: ";
  cin >> b;

  int c, d;
  c = a;
  d = b;
  
  cout << "The values before swapping " << a << " and " << b << " are " << c << " and " << d << endl;
  cout << "The values after swapping " << a << " and " << b << " are " << d << " and " << c << endl;
}