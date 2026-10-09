#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Introduce un numero positivo: ";
	cin >> a;

	if (a < 0) {
		cout << "Introduce un numero valido." << endl;
		return 1;
	}

	int n_original = a;
	int sum = 0;
	while(a>0){
		int digito = a % 10;
		sum += digito;
		a /= 10;
	}

	cout << "La suma de los digitos de " << n_original << " es: " << sum;

	return 0;
}