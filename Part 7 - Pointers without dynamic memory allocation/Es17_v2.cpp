// ESERCIZIO 17 - VERSIONE LABORATORIO

#include <iostream>
using namespace std;

int GetInverse(int);
bool isPalindrome(int);

int main()
{
	int number;
	cout << "Inserisci un numero: ";
	cin >> number;
	
	if (isPalindrome(number))
		cout << "Il numero è palindromo!" << endl;
	else
		cout << "Il numero NON è palindromo!" << endl;

}

int GetInverse(int n)
{
	int sign = 1;
	if (n <= 0)
	{
		sign = -1;
		n = -n;
	}
	
	int inv = 0;
	while (n > 0)
	{
		int mod = n%10;
		n = (n - mod) / 10;
		inv = inv * 10;
		inv = inv + mod;
	}
	
	inv = inv * sign;
	return inv;
}

bool isPalindrome(int n)
{
	int inv_n = GetInverse(n);
	
	return n == inv_n;
}
