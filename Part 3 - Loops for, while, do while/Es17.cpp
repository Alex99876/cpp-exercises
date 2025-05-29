// EXERCISE 17 - PRIME FACTORIZATION LAB VERSION

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a positive number: ";
    int num;
    cin >> num;
    
    int val = num;
    bool prime = true;
    int factor = 2;
    int power = 0;
    
    cout << num << " = ";
    
    while (val > 1 && factor <= val && factor != num)
    {
        if (val % factor == 0)
        {
            if (!prime)
                cout << " * ";
            prime = false;
            
            while (val % factor == 0)
            {
                power++;
                val /= factor;
            }
            
            cout << factor << "^" << power;
            power = 0;
        }
        
        if (factor == 2)
            factor = 3;
        else
            factor += 2;
    }
    
    if (prime)
        cout << "prime";
    cout << endl;
    
    return 0;
}
