#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int potencia;
	int base, exp;

	// cout << endl <<
	cout << "\nIngresa la base: "; cin >> base;
	cout << "\nIngresa el exponente: "; cin >> exp;

	potencia = pow(base, exp);
	cout << potencia;
	return 0;
}