// Write a program that asks the user the year they were born and prints their age

#include <iostream>
using namespace std;

int main()
{
  int currentYear, birthYear;
  cout << "Enter the current year: " << endl; // I don't know how to insert a validation check
  cin >> currentYear;
  cout << "What year were you born? " << endl;
  cin >> birthYear;
  
  cout << "Your age is: " << currentYear - birthYear << endl;