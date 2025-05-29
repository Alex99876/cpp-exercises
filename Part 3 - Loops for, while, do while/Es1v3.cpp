// EXERCISE 1 - DO-WHILE LOOP

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	// declare an int variable how_many
	// print the string "How many numbers do you want to average?"
	// read how_many
	
	int how_many;
	cout << "Di quanti numeri vuoi fare la media? ";
	cin >> how_many;
	
	// if how_many is not strictly positive
	// - print "Error: the number must be positive"
	// - exit main returning error code 42
	
	if (how_many < 0)
	{	
		cout << "Errore: il numero doveva essere positivo." << endl;
		return 42;
	}
	
	// declare a float variable sum initialized to 0
	/* iterate how_many times the following instructions
	- print a newline followed by the string "Insert a number "
	- declare a float variable x
	- read x
	- assign to sum the sum of sum and x */
	
	float sum = 0;
	int i = 0;
	
	do
	{
		float x;
		cout << endl << "Inserisci un numero: ";
		cin >> x;
		
		sum += x;
		i++;
	}
	
	while(i < how_many);
	
	
	// print a newline followed by the string "The average is "
	// print the division of sum by how_many

	cout << endl << "La media è: ";
	cout << setprecision(4) << sum/how_many << endl;
	
	return 0;
}


