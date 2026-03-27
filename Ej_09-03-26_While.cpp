//While - Mientras

#include <iostream>
using namespace std;

int main() {
	//Declarar variables
	//Inicializadas
	int mdo = 8, mdor = 0, prod;

	cout << "Tablas" << endl;
	cout << "\nIngresa un numero: "; cin >> mdo;

	while (mdor <= 9) {
		mdor++;	//mdor = mdor + 1; //contador
		prod = mdo * mdor;

		//Datos de salida
		cout << mdo << " * " << mdor << " = " << prod << endl;
		//Fin Mientras
	}
	return 0;
} //Fin main