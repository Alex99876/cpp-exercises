/* Write a function vector<int> insert(vector v, int i, int val) that inserts the value val into vector v at position i.
The length of v must be increased by 1 and any existing content of v from position i (inclusive) to the end must be shifted forward by one position.
NOTE: since the vector size is expected to increase, valid insertion positions include all existing positions (from 0 to v.size() - 1) and one position beyond the last (position v.size()), so i ∈ [0, v.size()].
If i is not within this range, throw an int exception.

[HINT: Append the last element of v (if it exists) to the end of v, shift elements forward starting from position i (copying from the end backward to avoid overwriting), and assign the value to be inserted at position i.] */

#include <iostream>
#include <vector>

using namespace std;

vector<int> insert(vector<int> v, int i, int val);

int main()
{
	// Suppose we already have a vector
	vector<int> v{1, 2, 3, 4, 5, 6};
	
	int position;
	int value;
	
	cout << "Enter the position where to insert the new value: ";
	cin >> position;
	
	cout << "Enter the value: ";
	cin >> value;
	
	// In the catch block, use a switch to handle exceptions with a message
	try
	{
		v = insert(v, position, value);
	}
	
	// The catch handles an int because the function throws an int
	catch(int e)
	{
		switch(e)
		{
			case -1:
				cerr << "Index too large: out of range." << endl;
				break;
			case -2:
				cerr << "Invalid negative index." << endl;
				break;
			default:
				break;
		}
	}
	
	// Print to see what we inserted
	for (int index = 0; index < (int)v.size(); index++)
	{
		cout << v[index] << " ";
	}
	cout << endl;
}

// INSERT FUNCTION
vector<int> insert(vector<int> v, int i, int val)
{
	// EXCEPTION HANDLING
	
	// Necessary because if a negative value is given, it would first enter this condition due to v.size() being unsigned int.
	// For example, if index is -9, without the following variable it would be converted to +9 and trigger the first exception instead of the second.
	int max = v.size(); 
	
	// If index is larger than max
	if (i > max) throw -1;
	
	// If index is less than 0
	if (i < 0) throw -2;
	
	// Change vector size: increase it by 1
	v.resize(v.size() + 1);
	
	// Loop from the last element (which is now v.size()-1)
	// Consider only indices greater than i (indices less than i are not of interest; at index = i we will insert the user’s element)
	// Elements after i must be copied and shifted forward.
	// If inserting at index i, we shift elements forward, meaning the last element is copied to the new last position,
	// the second to last element is copied to the last position, and so on.
	
	for (int index = v.size() - 1; index > i; index--)
	{
		// Copy the value from the previous element to the current one
		v.at(index) = v.at(index - 1);
	}
	
	// Insert the new value at position i
	v.at(i) = val;
	
	return v;
}
