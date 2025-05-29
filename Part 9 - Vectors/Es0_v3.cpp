// EXERCISE 0 Version 3 - Not present in the exercise book. Insert data of a person in a struct, then modify the name.
// Keep in mind that in this exercise the name field in the struct is a pointer to a string.

#include <iostream>
using namespace std;

struct person
{
    string *name;
    string surname;
    int birthYear;
};

int main()
{
    // Declare a variable personValue of type person and initialize its values
    // Since *name is a pointer type, I must assign it by reference, first initializing a new string with the name and then passing it by REFERENCE
    person personValue;
    string personName = "Tyler";
    personValue.name = &personName;
    personValue.surname = "Fitzgerald";
    personValue.birthYear = 2000;
    
    // Declare a variable personPointer of type pointer to person
    person *personPointer;
    
    // Initialize personPointer with the address of personValue
    personPointer = &personValue;
    
    // Print the values of personValue and personPointer
    cout << "Print 1" << endl;
    // Since the "name" field is a pointer in the struct, to print it I must dereference it with *
    cout << "personValue name: " << *personValue.name << endl;
    cout << "personPointer name: " << *personPointer->name << endl;
    
    // Modify the name field of personPointer
    // Since personPointer is a pointer, to modify its content I have to assign to its name field (line 40) the reference to a new string
    string name = "Alex";
    personPointer->name = &name;
    cout << endl;
    
    // Print the values of personValue and personPointer
    cout << "Print 2" << endl;
    cout << "personValue name: " << *personValue.name << endl;
    cout << "personPointer name: " << *personPointer->name << endl;
}
