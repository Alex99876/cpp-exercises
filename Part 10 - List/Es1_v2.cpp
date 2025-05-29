#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector_var(vector<int> &v);
void printVector(const vector<int> &v);

int main()
{
	// declare a std::vector vect of integers
	// call the function readVector_var on vect
	// call the function printVector on vect
	
	vector<int> vect;
	
	readVector_var(vect);
	printVector(vect);
}

// FUNCTION TO FILL THE VECTOR: VARIANT. Insert values and stop when user enters 'y'
void readVector_var(vector<int> &v) 
{
	cout << "Enter a numeric value or Y to finish: ";
	
	string input;
	cin >> input;

	while (input != "y" && input != "Y")
	{
		try
		{
			int val = stoi(input); // Function stoi -> STRING TO INTEGER, takes a string input and returns an integer output
			v.push_back(val);
		}
		catch (const exception &e)
		{
			cerr << "The entered element is not a number or Y." << endl;
		}
		
		cin >> input; // update the initial input value
	}
}

// FUNCTION TO PRINT THE VECTOR ELEMENTS
void printVector(const vector<int> &v) 
{

	/* iterate v.size() times
	- print the current element of v */
	
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout << "v[" << i << "] = "<< v.at(i) << endl;
	}
}
