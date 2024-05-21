#include <iostream>


//Sacar valor absoluto de un numero

//Prototipo de la funcion 

template<class T>
void mostrarAbs(T numero);

int main() {

	int num1 = -87;
	float num2 = -34.7;
	double num3 = -786.974539;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);

	return 0;
}

template<class T>
void mostrarAbs(T numero) {
	if (numero < 0) {
		numero = numero * -1;
	}

	std::cout << "el valor absoluto del numero es: \n " << numero<<endl;
}