/*
* 1. Programa para valorar el espacio de memoria que utiliza una variable.

* 2. Conversion implicita y explicita de datos
*/

#include <iostream>

using namespace std;
int main() {

	int entero = 56;
	double doble = 10;
	float flotante = 10.0f;
	char caracter = 'A';//Tipo de entero
	char c2 = 64;
	bool boleano = true;

		cout << "Tamanio en bytes de los tipos de datos primitivos\n";
		cout << "\nEntero (int): " << entero << " (Tamanio: " << sizeof(entero) << "bytes)";
		cout << "\nDoble (double): " << doble << " (Tamanio: " << sizeof(doble) << "bytes)";
		cout << "\nFlotante (float): " << flotante << " (Tamanio: " << sizeof(flotante) << "bytes)";
		cout << "\nCaracter (char): " << caracter << " (Tamanio: " << sizeof(caracter) << "bytes)";
		cout << "\nCaracter 2 (char): " << c2 << " (Tamanio: " << sizeof(c2) << "bytes)";
		cout << "\nBooleano (bool): " << boleano << " (Tamanio: " << sizeof(boleano) << "bytes)\n";

		string cadena = "Hola chicos";
		cout << "Tamanio en bytes de los tipos de datos ESTRUCTURADO";
		cout << "\nCadena (string): " << cadena << " (Tamanio: " << sizeof(cadena) << "bytes)\n";

		cout << "\nCONVERSION DE TIPOS\n";
		//Conversion implicita: El compilador de forma automatica realiza el cambio
		flotante = entero;
		cout << "Conversion de int --> float:" << flotante; cout << endl;

		//Conversion explicita:Se obliga al compilador a realizar una conversion
		int ascii = int(caracter);
		cout << "Conversion de char --> float:" << ascii; cout << endl;


		return 0;
}