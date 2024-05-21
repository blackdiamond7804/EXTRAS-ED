#include<iostream>
#include<vector>

using namespace std;

template<typename T>
vector<vector<T>> sumMatrices(const vector < vector <T>>& matriz1, const vector<vector<T>>& matriz2) {

	//Verificar que las matrices tengan las mismas dimensiones
	if (matriz1.size() != matriz2.size() || matriz1[0].size() != matriz2.size()) {
		throw invalid_argument("Las matrices deben tener tener las mismas dimensiones");
	}

	vector<vector<T>> result(matriz1.size(), vector<T>(matriz1[0].size()));

	for (size_t i = 0; i < matriz1.size(); ++i) {
		for (size_t j = 0; j < matriz1[0].size(); ++j) {
			result[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}

	return result;
}

//Funcion para imprimir una matriz
template<typename T>
void printMatriz(const vector<vector<T>>& matriz) {
	for (const auto& fila : matriz) {
		for (const auto& elemento : fila) {
			cout << elemento << " ";
		}
		cout << endl;
	}
}

int main() {
	try {
		vector<vector<int>> matriz1 = {
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		};

		vector<vector<int>> matriz2 = {
			{9, 8, 7},
			{6, 5, 4},
			{3, 2, 1}
		};

		vector<vector<int>> result = sumMatrices(matriz1, matriz2);

		cout << "Matriz 1: " << endl;
		printMatriz(matriz1);

		cout << "Matriz 2: " << endl;
		printMatriz(matriz2);

		cout << "Suma de matrices: " << endl;
		printMatriz(result);

	}
	catch (const exception& ex) {
		cerr << "Error: " << ex.what() << endl;
	}

	return 0;
}