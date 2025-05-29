// Scrivere un programma che prende in input il numero di ore (compreso tra 0 e 23)
// Di minuti (compreso tra 0 e 59) e stampa in output il numero di minuti totali

// Variante con ciclo do-while per controllo inserimento dati

#include <iostream>
using namespace std;

int main()
{
	int hour;
	int minute;
	
	do
	{
		cout << "Type the quantity of hours between 0 and 23: ";
		cin >> hour;
		
		cout << "Type the quantity of minutes between 0 and 59: ";
		cin >> minute;
	}
	while ((hour < 0 || hour > 23) || (minute < 0 || minute > 59));
	
	cout << "You typed " << hour << "h" << " and " << minute << "m" << endl;
	
	int const ONE_HOUR = 60;
	int tot_min = (hour * ONE_HOUR) + minute;
	
	cout << "Your time converted in minutes is: " << tot_min << endl; 
	
}
