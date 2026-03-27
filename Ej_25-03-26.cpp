/****ARREGLOS*****/
//Son una coleccio FINITA de elementos del mismo tipo de datos

#include <iostream>
using namespace std;

int main() {
	//Crear un arreglo que guarde las notas de 5 materias
	double nota[5];
	double nota2[] = {9.9,8,5,10,7.2};

	//1) Agregar valores a los elementos de un arreglo
	//Forma a mano
	nota[0] = 9.2;
	nota[1] = 8.1;
	nota[2] = 7.3;
	nota[3] = 9.9;
	nota[4] = 9.0;

	//Utilizando ciclos
	for (int i = 0; i < 5; i++) {
		cout << "Ingresa una calificacion: ";
		cin >> nota[i];
	}

	//2) Mostrar los elementos de un arreglo
	cout << "A mano" << endl;
	cout << nota[0] << ", " << nota[1] << ", " << nota[2] << ", " << nota[3] << ", " << nota[4] << endl << endl;

	cout << "Utilizando ciclos" << endl;
	for (int i = 0; i < 5; i++) {
		cout << nota[i] << " - ";
	}

	return 0;
}