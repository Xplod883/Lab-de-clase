#include <iostream>
#include <limits>

using namespace std;

int fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");
	int n;
	cout << "¿Cuántos números de Fibonacci deseas?: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << fibonacci(i) << " ";
	}
	cout << endl;

	return 0;
}