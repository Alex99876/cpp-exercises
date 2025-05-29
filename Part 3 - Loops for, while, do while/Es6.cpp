// Write a program that presents the user with a menu with four options, reads their choice, and selects the corresponding alternative:

// - declare an integer variable answer
/* repeat
- print the string "1 First choice"
- print the string "2 Second choice" on a new line
- print the string "3 Third choice" on a new line
- print the string "0 Exit the program" on a new line
- print the string "Make a choice: " on a new line
- read answer
- If answer is 1
-- print the message: "You made the first choice"
- If answer is 2
-- print the message: "You made the second choice"
- If answer is 3
-- print the message: "You made the third choice"
- If answer is 0
-- print the message: "You chose to exit the program."
-- terminate execution.
- In all other cases
-- print the message: "Invalid choice"
while answer is different from zero
*/

#include<iostream>
using namespace std;

int main()
{
	int answer;
	
	do
	{
		cout << "1 First choice" << endl; 
		cout << "2 Second choice" << endl;
		cout << "3 Third choice" << endl;
		cout << "0 Exit the program" << endl;
		cout << endl;
		
		cout << "Make a choice: ";
		cin >> answer;
	
		switch (answer)
		{
		case 1:
				cout << "You made the first choice" << endl;
				cout << endl;
				break;
		case 2:
				cout << "You made the second choice" << endl;
				cout << endl;
				break;
		case 3:
				cout << "You made the third choice" << endl;
				cout << endl;
				break;
		case 0:
				cout << "You chose to exit the program" << endl;
				cout << endl;
				break;
		default:
				cout << "Invalid choice" << endl;
				cout << endl;
		}
	
	} while (answer != 0);
	
	return 0;
}
