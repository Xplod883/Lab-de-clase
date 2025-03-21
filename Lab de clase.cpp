#include <iostream>
#include <limits>

using namespace std;

double dividir(int a, int b) {
	if (b == 0) {
		throw "Error: División por cero.";
	}
	return (double)a / b;
}

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");

	int num1, num2;

	cout << "Ingresa el numerador: ";
	cin >> num1;
	cout << "Ingresa el denominador: ";
	cin >> num2;

	try {
		double resultado = dividir(num1, num2);
		cout << "Resultado: " << resultado << endl;
	} catch (const char* mensaje) {
		cout << mensaje << endl;
	}

	return 0;
}