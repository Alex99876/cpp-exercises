// EXERCISE 0 - Not present in the exercise book. Insert data of a person in a struct, then modify the name.
// The name field modified through the pointer will also change in the Struct (no dedicated memory area is assigned)

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
	// Declare a variable personValue of type person and initialize its values
	person personValue;
	personValue.name = "Tyler";
	personValue.surname = "Fitzgerald";
	personValue.birthYear = 2000;
	
	// Declare a variable personPointer of type pointer to person
	person *personPointer;
	
	// Initialize personPointer with the address of personValue
	personPointer = &personValue;
	
	// Print the values of personValue and personPointer
	cout << "Print 1" << endl;
	cout << "personValue name: " << personValue.name << endl;
	cout << "personPointer name: " << personPointer->name << endl;
	
	// Modify the name field of personPointer
	string name = "Alex";
	personPointer->name = name;
	cout << endl;
	
	// Print the values of personValue and personPointer
	cout << "Print 2" << endl;
 	cout << "personValue name: " << personValue.name << endl;
	cout << "personPointer name: " << personPointer->name << endl;
}
