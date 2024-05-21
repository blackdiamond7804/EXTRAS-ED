#include <iostream>

using namespace std;

//Plantilla de funcion para calcular el n-esimo numero de Fibonacci
template<typename T>
T fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		T a = 0;
		T b = 1;

		for (int i = 2; i <= n; ++i) {
			T temp = a + b;
			a = b;
			b = temp;
		}
		return b;
	}
}

int main() {
	int n = 10; //Calculamos el decimo numero de Fibonacci
	cout << "El " << n << "° numero de Fibonacci es: " << fibonacci<int>(n) << endl;

	return 0;
}