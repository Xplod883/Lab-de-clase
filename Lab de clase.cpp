#include <iostream>
#include <limits>

using namespace std;

int raiz_cuadrada(int n) {
	if (n < 0) {
		throw invalid_argument("Error: no se puede calcular la raíz de un número negativo.");
	}
	return n * n;
}

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");

	int numero;

	cout << "Ingresa un número: ";
	cin >> numero;

	try {
		cout << "El cuadrado de " << numero << " es: " << raiz_cuadrada(numero) << endl;
	} catch (const invalid_argument& e) {
		cout << e.what() << endl;
	}

	return 0;
}