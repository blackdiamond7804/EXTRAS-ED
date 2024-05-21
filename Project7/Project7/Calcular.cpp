#include<iostream>

using namespace std;

template<typename T>
class Calculator {

private:
	T result;

public:
	
	Calculator():result(0){}

	void suma(T value) {
		result += value;
	}

	void resta(T value) {
		result = -value;
	}

	void multiplicacion(T value) {
		result *= value;
	}

	void division(T value) {
		if (value != 0) {
			result /= value;
		}
		else {
			cout << "Error al dividir sobre cero" << endl;
		}
	}

	T getResult() const {
		return result;
	}
};

int main() {

	Calculator<int> intCalculator;
	intCalculator.suma(5);
	intCalculator.resta(3);
	intCalculator.multiplicacion(4);
	intCalculator.division(2);
	cout << "Resultado de calcular las operaciones con eneteros es: " << intCalculator.getResult() << endl;

	Calculator<double> doubleCalculator;
	doubleCalculator.suma(5.5);
	doubleCalculator.multiplicacion(9.6);
	doubleCalculator.division(2.3);
	cout << "Resultado de calcular las operaciones con decimales es: " << doubleCalculator.getResult() << endl;

	return 0;
}