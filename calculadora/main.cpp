//calculadora 1.0//

#include <iostream>
using namespace std;

int suma(int a, int b) {
	return a + b;
}
int resta(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
int divi(int a, int b) {
	return a / b;
}

void calcular(int(*funcion)(int, int), int val_a, int val_b) {
	int result;
	result = funcion(val_a, val_b);
	cout << "resultado = " << result << endl;
}


int main() {
	int(*var_funcion)(int, int);
	var_funcion = suma;
	calcular(var_funcion, 10, 20);
	var_funcion = resta;
	calcular(var_funcion, 10, 20);
	var_funcion = multi;
	calcular(var_funcion, 10, 20);
	var_funcion = divi;
	calcular(var_funcion, 10, 2);

	cin.get();
	return 0;
}