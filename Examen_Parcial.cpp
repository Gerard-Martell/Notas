#include <iostream>
#include <cmath>
using namespace std;

int serie_A();
int serie_B();

int main() {
	int opc;
	cout << "----MENU DE SERIES----";
	cout << "\n1. Serie A\n2. Serie B\n";
	cout << "\nSeleccione una serie: "; cin >> opc;

	switch (opc) {
	case 1: serie_A(); break;
	case 2: serie_B(); break;
	default: cout << "Opcion invalida" << endl;
	}
	return 0;
}

int serie_A() {
	double a, b, c;

	cout << "\n--FORMULA CHICHARRONERA--\n";
	cout << "Ingrese a: "; cin >> a;
	cout << "Ingrese b: "; cin >> b;
	cout << "Ingrese c: "; cin >> c;

	cout << a << "x^2 + " << b << "x + " << c << endl;

	if (a == 0 && b == 0) {	//1)
		cout << "La ecuacion es degenerada" << endl;
	}
	else {
		if (a == 0 && b != 0) {	//2)
			cout << "Raiz unica: " << -c / b << endl;
		}
		else {	//3)
			double d = b * b - 4 * a * c;
			if (d >= 0) {
				cout << "Hay dos raices reales" << endl;
				double x1 = -b + sqrt(d) / (2 * a);
				double x2 = -b - sqrt(d) / (2 * a);
				cout << "x1: " << x1 << endl;
				cout << "x2: " << x2 << endl;
			}
			else {
				cout << "Hay dos raices complejas" << endl;
			}
		}
	}
	return 0;
}

int serie_B() {
	double x1, x2, y1, y2;

	cout << "\n--DISTANCIA ENTRE DOS PUNTOS--\n";
	cout << "Ingrese las coordenadas del primer punto" << endl;
	cout << "x1: "; cin >> x1;
	cout << "y1: "; cin >> y1;

	cout << "Ingrese las coordenadas del segundo punto" << endl;
	cout << "x2: "; cin >> x2;
	cout << "y2: "; cin >> y2;

	if (x1 == x2 && y1 == y2) {
		cout << "La distancia entre los dos puntos es cero" << endl;
	}
	else {
		double a = pow((x2 - x1), 2);
		double b = pow((y2 - y1), 2);
		double d = sqrt(a+b);
		//double d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		cout << "La distancia entre los dos puntos es: " << d << endl;
	}
	//Validar los cuadrantes
	if (x1 > 0 && y1 > 0) cout << "El primer punto se encuentra en el primer cuadrante" << endl;
	if (x2 > 0 && y2 > 0) cout << "El segundo punto se encuentra en el primer cuadrante" << endl;

	if (x1 < 0 && y1 > 0) cout << "El primer punto se encuentra en el segundo cuadrante" << endl;
	if (x2 < 0 && y2 > 0) cout << "El segundo punto se encuentra en el segundo cuadrante" << endl;

	if (x1 < 0 && y1 < 0) cout << "El primer punto se encuentra en el tercer cuadrante" << endl;
	if (x2 < 0 && y2 < 0) cout << "El segundo punto se encuentra en el tercer cuadrante" << endl;

	if (x1 > 0 && y1 < 0) cout << "El primer punto se encuentra en el cuarto cuadrante" << endl;
	if (x2 > 0 && y2 < 0) cout << "El segundo punto se encuentra en el cuarto cuadrante" << endl;

	if (x1 == 0 && y1 == 0) cout << "El primer punto se encuentra en el origen" << endl;
	if (x2 == 0 && y2 == 0) cout << "El segundo punto se encuentra en el origen" << endl;

	return 0;
}