//Szukanie elementu minimalnego w tablicy
//uwaga: elementy tablicy w C numerowane sa od 0
//       zatem nasza tablica ma indeksy od 0 do n-1
//       a[0], a[1], ..., a[n-1]
//www.algorytm.org

#include <iostream>
using namespace std;

int main()
{
	int ilosc; // definicja zmiennej typu int
	double *tablica = NULL; // definicja wskaznika na zmienna typu double (przypisujemy do niego NULL)
	int pozycja;
	double min;
	cout << "Podaj wielkosc tablicy: ";
	cin >> ilosc; // wczytanie ilosc liczb, ktore maja sie znalezc w tablicy
	tablica = new double[ilosc]; // dynamiczne utworzenie tablicy (nie warto tworzyc jej statycznie bo mozemy miec za malo lub za duzo i marnowac miejsce
	for (int i = 0; i < ilosc; i++) // petla wczytujaca liczby do tablicy
	{
		cout << "tablica[" << i+1 << "] = ";
		cin >> tablica[i];
	}
	min = tablica[0]; // zaczynamy porownywanie od pierwszego (zerowego) elementu tablicy
	pozycja = 0;
	for (int i = 0; i < ilosc; i++)
	{
		if (tablica[i] < min) 
		{
			pozycja = i;
			min = tablica[i];
		}
	}
	cout << "Element minmalny znajduje sie w tablicy pod indeksem " << pozycja+1 << " i wynosi " << min << endl;
	return 0; // zakonczenie dzialania funkcji main i calego programu
} 