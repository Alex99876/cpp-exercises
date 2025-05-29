// EXERCISE 2 - DYNAMIC ARRAYS

#include <iostream>
using namespace std;

struct dynamic_array
{
    int* store;
    unsigned int size;
};

// FUNCTION PROTOTYPE
void read_d_array(dynamic_array& d);
void print_d_array(const dynamic_array& d);

int main()
{
    dynamic_array d;
    
    read_d_array(d);
    print_d_array(d);
}

// FUNCTION TO READ DATA INTO AN ARRAY
void read_d_array(dynamic_array& d)
{
    // define an integer variable s initialized to a negative value
    int s = -1;
    
    /* as long as s is not strictly positive...
       print "Enter the size of the array" and newline
       read s */ 
    while (s <= 0)
    {
        cout << "Enter the size of the array: ";
        cin >> s;
    }
    
    // assign s to the size field of d
    d.size = s;
    
    // allocate s integers and assign the reserved memory area to the store field of d
    d.store = new int[s];
    
    /* iterate s times...
       print "Enter a value"
       read a value into the i-th element of the store field of d using the bracket notation to access it */
    
    int value; // Remember to declare a variable to store the input value before assigning it to the array
    for (int i = 0; i < s; ++i)
    {
        cout << "Enter a value: ";
        cin >> value; // could also do cin >> d.store[i]; without declaring value first
        d.store[i] = value;
    }
}

// FUNCTION TO PRINT A DYNAMIC ARRAY OF INTEGERS
void print_d_array(const dynamic_array& d)
{
    // define a pointer p and initialize it with the array field of d
    int *p = d.store; // no need to use & since store is already a pointer
    
    // using pointer arithmetic on p to visit the store field of d...
    // ...print the elements of the store field of d, ...
    // ...each followed by the character '\t'
    // print a newline
    
    int length = d.size;
    for (int i = 0; i < length; ++i)
    {
        cout << *(p + i) << "\t"; // or cout << *(d.store + i)
    }
    cout << endl;
}
