/*
Crear un programa en C++ que dado un menu, el usuario pueda elegir calcular
*/

#include <iostream>
#include <cmath>
using namespace std;

//declaracion de funciones
void cuadrado();
void rectangulo();
void triangulo();
void circulo();

int main()
{
	int opc;
	cout << "CALCULAR AREAS\n";
	cout << "1. Cuadrado\n2. Rectangulo\n3. Triangulo\n4. Circulo\nElige una opcion: \n";
	cin >> opc;

	switch (opc) {
		case 1: cuadrado(); break;
		case 2: rectangulo(); break;
		case 3: triangulo(); break;
		case 4: circulo(); break;
		default: cout << "Opcion incorrecta";
	}
	return 0;
}

void cuadrado(){
	int lado;
	cout << "Ingresa el lado del cuadrado: "; cin >> lado;
	cout << "El area del cuadrado es: " << lado * lado;
}

void rectangulo(){
	int base, altura;
	cout << "Ingresa la base del rectangulo: "; cin >> base;
	cout << "Ingresa la altura del rectangulo: "; cin >> altura;
	cout << "El area del rectangulo es: " << base * altura;
}

void triangulo(){
	int base, altura;
	cout << "Ingresa la base del triangulo: "; cin >> base;
	cout << "Ingresa la altura del triangulo: "; cin >> altura;
	cout << "El area del triangulo es: " << base * altura / 2;
}

void circulo(){
	double radio;
	cout << "Ingresa el radio: "; cin >> radio;
	cout << "El area del cirulo es: " << 3.1416 * (radio * radio);
}