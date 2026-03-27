#include <iostream>

using namespace std;

int main() {
	//Tipos de datos reales en C++: float/double
	double val1, val2, val3, suma, producto, promedio;

	cout << "Ingrese el valor 1: "; //Escribir --> cout
	cin >> val1; //Leer --> cin >>
	cout << "Ingrese el valor 2: ";
	cin >> val2;
	cout << "Ingrese el valor 3: ";
	cin >> val3;

	suma = val1 + val2 + val3;
	producto = val1 * val2 * val3;
	promedio = suma / 3;

	cout << "La suma de los 3 valors es igual a: " << suma << endl;
	cout << "El producto de los 3 valores es igual a: " << producto << endl;
	cout << "El promedio de los 3 valores es igual a: " << promedio << endl;

	return 0;
}