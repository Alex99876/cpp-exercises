#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter an integer between 1 and 12: ";
	cin >> a;
	
	switch (a)
	{
	case 1:
		 cout << "The month corresponding to number " << a << " is January" << endl;
		 break;
	
	case 2:
		 cout << "The month corresponding to number " << a << " is February" << endl;
		 break;
		 
	case 3:
		 cout << "The month corresponding to number " << a << " is March" << endl;
		 break;
	
	case 4:
		 cout << "The month corresponding to number " << a << " is April" << endl;
		 break;
	
	case 5:
		 cout << "The month corresponding to number " << a << " is May" << endl;
		 break;
	
	case 6:
		 cout << "The month corresponding to number " << a << " is June" << endl;
		 break;
	
	case 7:
		 cout << "The month corresponding to number " << a << " is July" << endl;
		 break;
	
	case 8:
		 cout << "The month corresponding to number " << a << " is August" << endl;
		 break;
	
	case 9:
		 cout << "The month corresponding to number " << a << " is September" << endl;
		 break;
	
	case 10:
		 cout << "The month corresponding to number " << a << " is October" << endl;
		 break;
	
	case 11:
		 cout << "The month corresponding to number " << a << " is November" << endl;
		 break;
	
	case 12:
		 cout << "The month corresponding to number " << a << " is December" << endl;
		 break;
	
	default:
		cout << "Error: the number is not between 1 and 12" << endl;
	}
	
	return 0;
}

