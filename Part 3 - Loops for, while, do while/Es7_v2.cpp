/* EXERCISE 7

Write a program that asks the user for positive integers and prints on a new line as many '|' as the number's size (like sticks in kindergarten), until the user wants to stop. */

#include <iostream>
using namespace std;

int main()
{
	int num;
	char answer;
	
	do
	{
		cout << "Enter a positive number: ";
		cin >> num;
		
		if (num < 0)
			cout << "Error: negative number. Try again" << endl;
			
		for (int i = 0; i < num; i++)
		{
			cout << " | ";
		}
	
		cout << endl;
		
		cout << "Enter 's' or 'S' to stop, any other character to continue." << endl;
		cin >> answer;
			
	} while (num < 0 || (answer != 's' && answer != 'S'));
	
	cout << "I stopped because you entered: " << answer << endl;
	
	return 0;
}
