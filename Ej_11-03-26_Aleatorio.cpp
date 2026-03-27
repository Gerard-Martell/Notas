//Generacion de numeros aleatorios (pseudoaleatorios)

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL)); //Crea la semilla, puede ser NULL o 0
	int aleatorio;

	aleatorio = rand();
	cout << "Valor aleatorio 0 - 32767: " << aleatorio << endl;

	aleatorio = rand() % 101;
	cout << "Valor aleatorio 0 - 100: " << aleatorio << endl;

	aleatorio = rand() % 50 + 1;	//Inicio: 1, Diferencia: 50
	cout << "Valor aleatorio 0 - 50: " << aleatorio << endl;

	aleatorio = rand() % 31 + 50;	//Inicio: 50, Diferencia: 31
	cout << "Valor aleatorio 50 - 80 : " << aleatorio << endl;

	cout << "\nCalificaciones de Programacion: ";
	int suma = 0, cal;
	for(int i = 0; i < 10; i++) {
		cal = rand() % 10 + 1;
		cout << cal << ", ";
		suma += cal;
	}
	int promedio = suma / 10;

	cout << "\nEl promedio es: " << promedio << endl;
	return 0;
}