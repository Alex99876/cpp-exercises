/*Scrivere un programma che prende in input il numero di ore (compreso fra 0 e 23) e di minuti (compreso fra 0 e 59) e
stampa in output il numero di minuti totali.*/

#include <iostream>
using namespace std;

int const MIN_HOUR = 60;

int main()
{
	int hour;
	int min;
	
	do
	{
		cout << "Type the hour between 0 - 23: ";
		cin >> hour;
		
		cout << "Type the minutes between 0 - 59: ";
		cin >> min;
		
		if ((hour < 0 || hour > 23) || (min < 0 || min > 59))
			cout << "Error: try again" << endl;
			
	}
	while ((hour < 0 || hour > 23) || (min < 0 || min > 59));
	
	cout << "You typed " << hour << " hour/s" << " and " << min << " minutes" << endl;
	
	int conversion = (hour * MIN_HOUR) + min; //conversion in minutes
	
	cout << "The total minutes are: " << conversion << endl;

}
