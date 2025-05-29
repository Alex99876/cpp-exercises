/* ESERCIZIO 11

Scrivere un programma che legge un numero intero compreso fra 1 e 12 e stampa il nome del mese corrispondente (1==gennaio..). 
Se il numero non è compreso fra 1 e 12 stampa un messaggio di errore ed esce.

Mia variante con controllo ciclo do-while - anche se con switch non ha molto senso? */

#include<iostream>
using namespace std;

int main()
{
	int a;
	do
	{
		cout << "Enter a number between 0 e 12: ";
		cin >> a;
		
		if (a < 0 || a > 12)
			cout << "Error: try again." << endl;
	}
	while((a < 0) || (a > 12));
	
	cout << "You've entered: " << a << endl;
	
	switch (a)
	{
	case 1:
		 cout << "The month correspondant to the number " << a << " is January" << endl;
		 break;
	
	case 2:
		 cout << "The month correspondant to the number " << a << " is February" << endl;
		 break;
		 
	case 3:
		 cout << "The month correspondant to the number " << a << " is March" << endl;
		 break;
	
	case 4:
		 cout << "The month correspondant to the number " << a << " is April" << endl;
		 break;
	
	case 5:
		 cout << "The month correspondant to the number " << a << " is May" << endl;
		 break;
	
	case 6:
		 cout << "The month correspondant to the number " << a << " is June" << endl;
		 break;
	
	case 7:
		 cout << "The month correspondant to the number " << a << " is July" << endl;
		 break;
	
	case 8:
		 cout << "The month correspondant to the number " << a << " is August" << endl;
		 break;
	
	case 9:
		 cout << "The month correspondant to the number " << a << " is September" << endl;
		 break;
	
	case 10:
		 cout << "The month correspondant to the number " << a << " is October" << endl;
		 break;
	
	case 11:
		 cout << "The month correspondant to the number " << a << " is November" << endl;
		 break;
	
	case 12:
		 cout << "The month correspondant to the number " << a << " is December" << endl;
		 break;
	
	default:
		cout << "Error: the number entered is not between 1 e 12" << endl;
	}
	
	return 0;
}
	
