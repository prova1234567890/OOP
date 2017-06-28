#include <iostream>
#include "Olimpiade.h"
using namespace std;
int main()
{
	Olimpiade O;
	Atleta A1("Giulio", "Italia", 30, 4, 1, 2);
	Atleta A2("Harry", "Regno Unito", 25, 2, 5, 1);
	Atleta A3("Jacques", "Francia", 35, 6, 3, 0);
	Atleta A4("Vincenzo", "Italia", 23, 0, 3, 5);
	Atleta A5("Laurent", "Francia", 35, 1, 3, 1);
	Atleta A6("James", "Regno Unito", 21, 6, 0, 3);
	O.aggiungi(A1);
	O.aggiungi(A2);
	O.aggiungi(A3);
	O.aggiungi(A4);
	O.aggiungi(A5);
	O.aggiungi(A6);

	cout<<	O.metodo1();
	cout << O.metodo4();
	cout << O.metodo3();
	cout << O.metodo2();
	system("PAUSE");
	return 0;
}