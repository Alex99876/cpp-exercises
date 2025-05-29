#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int> &v);
void printVector(const vector<int> &v);

int main()
{
	vector<int> vect;

	readVector(vect);
	printVector(vect);
}

// FUNCTION TO FILL THE VECTOR with input values until 'y' is entered
void readVector(vector<int> &v) 
{
	cout << "Enter the sequence values, finish with 'y': ";

	while (true)
	{
		string input;
		cin >> input;

		if (input == "y" || input == "Y") // terminator
			break;

		try {
			int value = stoi(input); // convert string to int
			v.push_back(value);
		} catch (invalid_argument&) {
			cout << "Invalid value, please try again: ";
		}
	}
} 

// FUNCTION TO PRINT THE VECTOR ELEMENTS
void printVector(const vector<int> &v) 
{
	for (unsigned int i = 0; i < v.size(); ++i)
	{
		cout << "v[" << i << "] = " << v.at(i) << endl;
	}
}
