// Write a program that takes as input the number of hours (between 0 and 23)
// and minutes (between 0 and 59) and prints the total number of minutes

#include <iostream>
using namespace std;

const int MIN_PER_HOUR = 60;

int main()
{
	int hour, min;
	cout << "Enter an hour (between 0 and 23): "; // Input validation (if check) should be added
	cin >> hour;
	
	cout << "Enter minutes (number between 0 and 59): "; // Input validation (if check) should be added
	cin >> min;
	
	int total_min;
	total_min = (MIN_PER_HOUR * hour) + min;
	
	cout << "The total number of minutes is: " << total_min << endl;
	
	return 0;
}