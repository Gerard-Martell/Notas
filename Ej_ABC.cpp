#include <iostream>
using namespace std;

int main() {
	//Declaracion de variables
		//double puede usarse como float
	float salBas, porBon, valBon;
	int tieSer;

	cout << "Salario basico: "; cin >> salBas;
	cout << "Tiempo de servicio en anios: "; cin >> tieSer;

	//Procesos parciales
		// if no requiere llaves si instruccion es simple
	if (tieSer < 5) {
		porBon = 5; }
	else {
		if (tieSer < 10) {
			porBon = 10; }
		else {
			if (tieSer < 15) {
				porBon = 15; }
			else {
				if (tieSer < 20) {
					porBon = 20; }
				else {
					if (tieSer < 25) {
						porBon = 25; }
					else {
						if (tieSer < 30) {
							porBon = 35; }
						else {
							porBon = 50;
						}
					}
				}
			}
		}
	}

	valBon = (salBas * porBon) / 100;

	cout << "Porcentaje de bonificacion: " << porBon << "%\n";
	cout << "Valor de la bonificacion: $" << valBon << "\n";


	return 0;
}