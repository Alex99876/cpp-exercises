// Write a program that reads two numbers and prints them in ascending order WITHOUT COMPARING THEM.

#include <iostream>
#include <cmath> // for abs()

using namespace std;

int main()
{
    // Variable declaration
    
    float a, b;
    float average, halfDistance;
    
    // Ask the user to input two numbers
    
    cout << "Enter the first number: ";
    cin >> a;
    
    cout << "Enter the second number: ";
    cin >> b;
    
    // Calculate the average and half-distance to order the numbers without comparing them
    
    average = (a + b) / 2;
    halfDistance = abs(a - b) / 2; // use absolute value to handle cases when a < b, otherwise the order would be reversed
    
    // Print the values in ascending order
    // Subtracting halfDistance from average gives the smaller number
    // Adding halfDistance to average gives the larger number
    
    cout << "The numbers in ascending order are: " << average - halfDistance << " and " << average + halfDistance << endl;
    
    return 0;
}
