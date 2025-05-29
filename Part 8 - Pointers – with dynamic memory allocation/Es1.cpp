/* EXERCISE 1
Write a program where you use pointers to access variable locations. 
You are encouraged to improve the minimal print messages proposed in the exercise to better understand which values are being printed, for example by adding phrases like "address of s1 ==" or "value of p ==". 
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare 2 variables s1 and s2
    string s1 = "Hello";
    string s2 = "World";

    // Print values of s1 and s2
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << endl;

    // Print memory addresses of s1 and s2
    cout << "Debug 1: address of s1 = " << &s1 << endl;
    cout << "Debug 1: address of s2 = " << &s2 << endl;
    cout << endl;

    // Declare a pointer variable p of type string initialized with the address of s1
    string *p = &s1;

    // Print the value pointed to by p and the memory address stored in p
    cout << "Debug 2: value pointed to by p = " << *p << endl;
    cout << "Debug 2: memory address stored in p = " << p << endl;
    cout << endl;

    // Assign the string "Ciao" to the memory area pointed to by p
    *p = "Ciao";
    cout << "Debug 3: value pointed to by p = " << *p << endl;
    cout << "Debug 3: memory address stored in p = " << p << endl;
    cout << endl;

    // Assign p the address of s2
    p = &s2;

    // Print the value pointed to by p and the memory address stored in p
    cout << "Debug 4: value pointed to by p = " << *p << endl;
    cout << "Debug 4: memory address stored in p = " << p << endl;
    cout << endl;

    // Assign the string "Mondo" to the memory area pointed to by p
    *p = "Mondo";
    cout << "Debug 5: value pointed to by p = " << *p << endl;
    cout << "Debug 5: memory address stored in p = " << p << endl;
    cout << endl;

    // Print s1 and s2
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
}
