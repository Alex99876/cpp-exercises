// Write a program that calculates the perimeter and area of a rectangle

#include <iostream>
using namespace std;

int main()
{
  float b, h; // declare base and height as floats, they can be decimal numbers
  cout << "Enter the base and height: " << endl;
  cin >> b >> h;

  cout << "The perimeter of the rectangle is: " << 2 * (b + h) << endl;
  cout << "The area of the rectangle is: " << b * h << endl;

}
