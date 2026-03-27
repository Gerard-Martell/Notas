//Do-While - Repetir

#include <iostream>
using namespace std;

int main() {
	//Declarar variables
	//Inicializadas
	int mdo = 8, mdor = 0, prod;

	cout << "Tablas" << endl;
	cout << "\nIngresa un numero: "; cin >> mdo;

	do {
		mdor++; //mdor = mdor + 1;
		prod = mdo * mdor;
		cout << mdo << " * " << mdor << " = " << prod << endl;

	}while (mdor <= 9); //Fin Do-While
	return 0;
} //Fin main