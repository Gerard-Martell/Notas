/*
Crear un programa en C++ que dado un menu, el usuario pueda elegir calcular
*/

#include <iostream>
using namespace std;

//declaracion de funciones
void cuadrado();
void rectangulo();
void triangulo();
void circulo();

//declara variables globales
int base, altura;

int main()
{
	int opc; //variable local
	cout << "CALCULAR AREAS\n";
	cout << "1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo\n\nElige una opcion: \n";
	cin >> opc;

	switch (opc) {
	case 1: cuadrado(); break;
	case 2: rectangulo(); break;
	case 3: triangulo(); break;
	case 4: circulo(); break;
	default: cout << "Opcion incorrecta" << endl;
	}
	return 0;
}

void cuadrado() {
	int lado; //variable local
	cout << "Ingresa el lado del cuadrado: "; cin >> lado;
	cout << "El area del cuadrado es: " << lado * lado;
}

void rectangulo() {
	//int base, altura; //variable local
	cout << "Ingresa la base del rectangulo: "; cin >> base;
	cout << "Ingresa la altura del rectangulo: "; cin >> altura;
	cout << "El area del rectangulo es: " << base * altura;
}

void triangulo() {
	//int base, altura; //variable local
	cout << "Ingresa la base del triangulo: "; cin >> base;
	cout << "Ingresa la altura del triangulo: "; cin >> altura;
	cout << "El area del triangulo es: " << base * altura / 2;
}

void circulo() {
	double radio;//variable local
	cout << "Ingresa el radio: "; cin >> radio;
	cout << "El area del cirulo es: " << 3.1416 * (radio * radio);
}