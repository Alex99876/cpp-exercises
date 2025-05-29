/* EXERCISE 17
Write a function with an integer argument n that returns a boolean: true if n is a palindrome, 
meaning its digits (in base 10) read from right to left correspond to the digits read from left to right.
[HINT: use the reverse function.] */

#include <iostream>

using namespace std;

int reverseNumber(int);
void printResult(int);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    printResult(num);

    // OR alternatively:
    // cout << "The number " << num << " reversed is: " << reverseNumber(num) << endl;
    // cout << "Is the number a palindrome?" << endl;
    // cout << boolalpha << (num == reverseNumber(num)) << endl;
}

int reverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        int digit = n % 10;
        n = n / 10;  // or n = (n - digit) / 10;
        reversed = reversed * 10 + digit;
    }

    return reversed;
}

void printResult(int n)
{
    cout << "The number " << n << " reversed is: " << reverseNumber(n) << endl;
    cout << "Is the number a palindrome?" << endl;
    cout << boolalpha << (n == reverseNumber(n)) << endl;
}
