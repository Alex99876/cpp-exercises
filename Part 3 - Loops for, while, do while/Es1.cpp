#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Declare an integer variable how_many
    // Print the string "How many numbers do you want to average?"
    // Read how_many
    
    int how_many;
    cout << "How many numbers do you want to average? ";
    cin >> how_many;
    
    // If how_many is not strictly positive
    // - print "Error: the number must be positive"
    // - exit main returning error code 42
    
    if (how_many < 0)
    {   
        cout << "Error: the number must be positive." << endl;
        return 42;
    }
    
    // Declare a float variable sum initialized to 0
    /* Iterate how_many times the following instructions:
    - print a newline followed by the string "Enter a number: "
    - declare a float variable x
    - read x
    - assign to sum the sum of sum and x */
    
    float sum = 0;
    int i = 0;
    
    while(i < how_many)
    {
        float x;
        cout << endl << "Enter a number: ";
        cin >> x;
        
        sum += x;
        i++;
    }
    
    // Print a newline followed by the string "The average is: "
    // Print the division of sum by how_many
    
    cout << endl << "The average is: ";
    cout << setprecision(4) << sum/how_many << endl;
    
    return 0;
}




