#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double val1, val2, res;
	int opc;

	cout << "\nMENU DE OPCIONES\n";
	cout << "\n1. Suma\n2. Resta\n3. Multiplicar\n4. Dividir\n5. Potencia\n";
	cout << "\nSeleccione una opcion: \n"; cin >> opc;

	cout << "\nValor 1:\n"; cin >> val1;
	cout << "\nValor 2:\n"; cin >> val2;



	switch (opc) {
	case 1:
		res = val1 + val2;
		cout <<"\n" << val1 << " + " << val2 << " = " << res;
		break;

	case 2:
		res = val1 - val2;
		cout <<"\n" << val1 << " - " << val2 << " = " << res;
		break;

	case 3:
		res = val1 * val2;
		cout << "\n" << val1 << " * " << val2 << " = " << res;
		break;

	case 5:
		if (val2 != 0) {
			res = val1 / val2;
			cout << "\n" << val1 << " / " << val2 << " = " << res;
		}
		else
			cout << "\n" << "ERROR. No se puede dividir entre 0";
		break;

	case 6:
		res = pow(val1, val2);
		cout << "\n" << val1 << " ^ " << val2 << " = " << res;
		break;

	default:
		cout << "\nOpcion no valida";
		break;
	} // Fin delswirch
	return 0;
}// Fin main()