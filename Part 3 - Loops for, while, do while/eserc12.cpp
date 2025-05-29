/* EXERCISE 12

Write a program that reads two strictly positive integers and prints a right trapezoid made of 'x' characters, 
where the bases are as long as the numbers read, and the height is equal to the difference between the bases plus one.
For example, given the input 5 and 9, it will print:

xxxxx
xxxxxx
xxxxxxx
xxxxxxxx
xxxxxxxxx

(which is 5 rows high = 9 − 5 + 1). Note that given the choice of height, each row prints one more character. */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int temp;
    do
    {
        cout << "Enter 2 positive numbers: ";
        cin >> num1 >> num2;
        
    } while (num1 < 0 || num2 < 0);
    
    cout << "You entered: " << num1 << " and " << num2 << endl;
    
    // Ensure num1 is the larger number
    if (num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
        
    cout << "In descending order they are " << num1 << " and " << num2 << endl;
    
    int height = (num1 - num2) + 1; 
    cout << "Height: " << height << endl;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = num2; j <= num1 + i; j++)
            cout << "x";
        cout << endl;
    }   
}
