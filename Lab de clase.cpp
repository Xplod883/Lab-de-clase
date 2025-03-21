#include <iostream>
#include <limits>

using namespace std;

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");
	int numero;

	cout << "Ingresa un número: ";
	cin >> numero;

	//Validar si el número es par o impar
	if (numero % 2 == 0) {
		cout << numero << " es un número par." << endl;
	} else {
		cout << numero << " es un número impar." << endl;
	}

	return 0;
}