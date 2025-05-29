// EXERCISE 17 - PRIME FACTORIZATION

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    
    do
    {
        cout << "Enter an integer greater than 1: ";
        cin >> num;
        
        if (num <= 1)
        {
            cout << "The entered number is less than or equal to 1. Please try again." << endl;
            cout << endl;
        }   
    
    }
    while (num <= 1);

    int fac = 2;

    while (num > 1)
    {
        if (num % fac == 0)
        {
            cout << fac << "^"; // print the base first
            num /= fac;
            
            int pow = 1;
            
            while (num % fac == 0) // get the power of current base
            {
                num /= fac;
                pow++;
            }
            
            cout << pow; // print the power, now fac^pow is printed

            // if not the last factor, print a multiplication symbol
            if (num != 1)
                cout << " * ";
            
        }
        else
        {
            fac++;
        }
     
    }
    
    cout << endl;
    
    return 0;
}
