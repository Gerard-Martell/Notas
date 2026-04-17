#include <iostream>
using namespace std;

/* Dos tipos de funciones
- con retorno de valor
- sin retorno de valor
*/

//declaracion de la funcion
void imprimir();
int multiplicacion(); //con retorno de valor/sin parametros

int main()
{
	imprimir(); //llamada a la funcion
	cout << multiplicacion() << endl; //muestra directamente el valor de return
	int res = multiplicacion(); //almacena el valor de return
	cout << res;

	return 0;
}

int multiplicacion() {
	int num1, num2;
	cout << "Ingresa un valor: "; cin >> num1;
	cout << "Ingresa un valor: "; cin >> num2;
	return num1 * num2;
}

void imprimir(){ //sin retorno/sin parametros
	int num;
	cout << "Ingresa un valor: "; cin >> num;
	for (int i = 1; i < 10; i++)
		cout << num << " * " << i << " = " << num * i << endl;
}

