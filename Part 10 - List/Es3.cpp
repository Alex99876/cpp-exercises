#include <iostream>
#include <vector>

using namespace std;

void readVector(vector<int> &v);
int SequentialSearch_vector(const vector<int> &v, int item);
int SequentialSearch_vector_2(const vector<int> &v, int item);


int main()
{
	int elemento;
	vector<int> vettore;
	
	readVector(vettore);
	
	cout << "Enter the element to search: ";
	cin >> elemento;
	
	cout << "Index value V1: " << SequentialSearch_vector(vettore, elemento) << endl;
	cout << "Index value V2: " << SequentialSearch_vector_2(vettore, elemento) << endl;
}

// FUNCTION TO READ VECTOR VALUES
void readVector(vector<int> &v) 
{
	// Print "Enter the sequence size: "
	// Declare an integer variable N
	// Read N
	
	int N;
	cout << "Enter the sequence size: ";
	cin >> N;

	// iterate N times
	//	- read an integer value
	//	- store the read value in v 
	
	cout << "Enter the sequence values: ";
	for (unsigned int i = 0; i < N; ++i)
	{
		int value;
		cin >> value;
		v.push_back(value);
	}
} 

// SEARCH FUNCTION
int SequentialSearch_vector(const vector<int> &v, int item)
{
	// declare an int variable loc and initialize it to -1
	// declare a bool variable found and initialize it to false
	// declare an index variable to traverse the vector
	/* iterate over v until found becomes true or the whole vector is iterated
	- if the value at the current position (i) equals item
	-- assign true to found and i to loc
	*/
	// return loc
	
	int loc = -1;
	bool found = false;
	int index = 0; // index variable to traverse the vector
	
	while (!found && index < v.size())	
	{
		if (v.at(index) == item)
		{
			found = true;
			loc = index;
		}	
		
		index++; // increment index regardless of finding or not
	}
	
	return loc;
}

// SEARCH FUNCTION: VARIANT WITH FOR LOOP
int SequentialSearch_vector_2(const vector<int> &v, int item) 
{
	/* iterate over v from first to last position
	- if the value at the current position (i) equals item
	-- return i
	*/
	// return -1 if not found

	for (unsigned int index = 0; index < v.size(); ++index)
	{
		if (v.at(index) == item) return index;
	}

	return -1;
}
