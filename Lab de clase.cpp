#include <iostream>
#include <limits>

using namespace std;

int suma(int n) {
	if (n == 0) {
		return 0;
	}
	return n + suma(n - 1);
}

int main() {
	setlocale(LC_ALL, "es_ES.UTF-8");
	int n{};
	cout << "La suma de los primeros " << n << " números es: " << suma(n) << endl;
	cin >> n;

	return 0;
}