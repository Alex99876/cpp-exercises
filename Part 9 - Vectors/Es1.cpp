// EXERCISE 1

#include <iostream>
using namespace std;

int main()
{
    // declare an integer constant N initializing it with a moderate value (e.g. 5 or 10)
    const int N = 5;
    
    // declare a variable v of type pointer to int
    int* v;
    
    // allocate memory for N ints and assign it to v
    v = new int[N];
    
    // write into the memory pointed to by v the sequence 1, 3, 5, ..., 2*N-1 (the first N odd numbers)
    for (int i = 0; i < N; ++i)
    {
        v[i] = 2*i + 1;
    }   
    
    // print v using pointer arithmetic
    cout << "First print " << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << *(v + i) << " ";
    }
    
    cout << endl;
    
    // deallocate v
    delete[] v;
    v = nullptr;
    
    // allocate memory for 2*N ints and assign it to v
    v = new int [2*N];
    
    // write into the memory pointed to by v the sequence 1, 3, 5, ..., 4*N-1 (the first 2*N odd numbers)
    for (int i = 0; i < 2*N; ++i)
    {
        v[i] = 2*i + 1;
    }
    
    // print v using pointer arithmetic
    cout << "Second print " << endl;
    for (int i = 0; i < 2*N; ++i)
    {
        cout << *(v + i) << " ";
    }
    
    // deallocate v
    delete[] v;
    v = nullptr;

}
