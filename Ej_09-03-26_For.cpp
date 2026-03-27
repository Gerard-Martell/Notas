//Do-While - Repetir

#include <iostream>
using namespace std;

int main() {
	//Declarar variables
	//Inicializadas
	int mdo = 8, mdor = 0, prod;

	cout << "Tablas CICLO FOR \nIngresa un numero: "; cin >> mdo;

	for (mdor = 1; mdor <= 10; mdor++) {
		prod = mdo * mdor;
		cout << mdo << " * " << mdor << " = " << prod << endl;
	}
	return 0;
} //Fin main