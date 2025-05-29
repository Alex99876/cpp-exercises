#include <iostream>
using namespace std;

struct person
{
    string name;
    string surname;
    int birthYear;
};

int main()
{
    // Declare and initialize a variable of type person
    person personValue;
    personValue.name = "Tyler";
    personValue.surname = "Fitzgerald";
    personValue.birthYear = 2000;
    
    // Declare a pointer to person and allocate memory dynamically on the heap
    person *personPointer = new person;
    
    // Copy the name field from personValue to personPointer (they do NOT share the same memory area)
    personPointer->name = personValue.name;
    
    // Print the names (both are "Tyler")
    cout << "Print 1" << endl;
    cout << "personValue name: " << personValue.name << endl;
    cout << "personPointer name: " << personPointer->name << endl;
    
    // Modify the name field pointed to by personPointer
    // This modification does NOT affect personValue because the two structs are in different memory areas
    string name = "Alex";
    personPointer->name = name;
    cout << endl;
    
    // Print the names after modification
    cout << "Print 2" << endl;
    cout << "personValue name: " << personValue.name << endl;        // Remains "Tyler"
    cout << "personPointer name: " << personPointer->name << endl;    // Changes to "Alex"
    
    // Free the memory allocated with new to avoid memory leaks
    delete personPointer;
}
