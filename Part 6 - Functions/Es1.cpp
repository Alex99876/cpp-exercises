/* EXERCISE 1

Define a struct type Person to represent data related to a person.
Declare two variables of type Person.
Assign values to the members of me and you.
Assign the value of one entire struct variable to another.
Access (for reading) the member values, here to print them. */

#include <iostream>
using namespace std;

// Define the struct Person
struct Person
{
	string name;
	string surname;
	unsigned int birthyear;
};

int main()
{
	// Declare two variables of type Person
	Person me, you;
	
	// Assign values to the members of me and you
	me.name = "Bruce";
	me.surname = "Wayne";
	me.birthyear = 1939;
	
	you.name = "Clark";
	you.surname = "Kent";
	you.birthyear = 1933;
	
	me = you;
	
	// Print the values
	cout << "My name is: " << me.name << " " << me.surname << endl;
	cout << "I was born in " << me.birthyear << endl;

}
