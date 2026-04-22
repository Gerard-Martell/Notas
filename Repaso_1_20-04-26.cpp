#include <iostream>
using namespace std;

int boletos();
int par_impar();
int calificaciones();
int dos_num();
int promedio();
int multiplos();

int main()
{
	int opc;
	cout << "----MENU DE REPASO----";
	cout << "\n1. Boletos\n2. Par_Impar\n3. Calificaciones\n4. Dos_num\n5. Promedio\n6. Multiplos\n";
	cout << "\nSeleccione un repaso: ";
	cin >> opc;

	switch (opc) {
	case 1: boletos(); break;
	case 2: par_impar(); break;
	case 3: calificaciones(); break;
	case 4: dos_num(); break;
	case 5: promedio(); break;
	case 6: promedio(); break;
	default: cout << "Opcion invalida" << endl;
	}
	return 0;
}

int boletos() {
	int boleto = 80;
	int num_boleto;
	double pago, cambio;
	double tot_pagar;
	cout << "----MENU DE BOLETOS----" << endl;
	cout << "Precio unitario de boleto: $80.00" << endl;
	cout << "Cuantos boletos desea comprar? "; cin >> num_boleto;

	tot_pagar = boleto * num_boleto;
	cout << "Ingrese pago: $"; cin >> pago;

	if (pago < tot_pagar) {
		cout << "\nFondos insuficientes.";
	}
	else {
		cambio = pago - tot_pagar;
		cout << "\nDisfrute su pelicula!\nNum de boletos: " << num_boleto << endl; cout << "Cambio: $" << cambio;
	}
	return 0;
}

int par_impar() {
	int num;
	cout << "----PAR O IMPAR----" << endl;
	cout << "Ingrese un numero: "; cin >> num;

	if (num % 2 == 0) {
		cout << "\nEl numero: " << num << " es par";
	}
	else {
		cout << "\nEl numero: " << num << " es impar";
	}
	return 0;
}

int calificaciones() {
	int cal1, cal2, cal3, cal_fin;
	cout << "----MENU DE CALIFICACIONES----" << endl;
	cout << "Ingresa la primera calificacion: "; cin >> cal1;
	cout << "Ingresa la segunda calificacion: "; cin >> cal2;
	cout << "Ingresa la tercera calificacion: "; cin >> cal3;

	cal_fin = (cal1 + cal2 + cal3) / 3;

	if (cal_fin >= 60) {
		cout << "\nEstudiante aprobado";
	}
	else {
		cout << "\nEstudiante reprobado";
	}

	return 0;
}

int dos_num() {
	int num1, num2, suma, resta, multiplicacion;
	cout << "----MENU DE DOS NUMEROS----" << endl;
	cout << "Escriba el primer numero: "; cin >> num1;
	cout << "Escriba el segundo numero: "; cin >> num2;

	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;

	cout << "\nLa suma de " << num1 << " y " << num2 << " es: " << suma;
	cout << "\nLa resta de " << num1 << " y " << num2 << " es: " << resta;
	cout << "\nLa multiplicacion de " << num1 << " y " << num2 << " es: " << multiplicacion;
	return 0;
}

int promedio() {
	int num_cal, cal, suma_cal = 0, prom;
	cout << "----MENU DE CALIFICACIONES PROMEDIO----" << endl;
	cout << "Ingresa la cuantas calificaciones vas a meter: "; cin >> num_cal;

	for (int i = 1; i <= num_cal; ++i) {
		cout << "Ingresa la calificacion: "; cin >> cal;
		suma_cal = suma_cal + cal;
	}
	prom = suma_cal / num_cal;

	cout << "\nEl promedio es: " << prom;
	return 0;
}

int multiplos() {

	return 0;
}