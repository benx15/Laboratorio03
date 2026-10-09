#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char a;
	int cont_n, cont_mayus, cont_minus;
	cont_n = 0;
	cont_mayus = 0;
	cont_minus = 0;

	do {
		cout << "Introduce un caracter: ";
		cin >> a;
		if (isdigit(a)) cont_n++;
		if(isupper(a)) cont_mayus++;
		if (islower(a)) cont_minus++;
		
	} while (a !='*');

	cout << "Hay " << cont_n <<" numeros"<<" Hay "<< cont_mayus<< " letras mayusculas" << " y " << cont_minus << " letras minusculas";

}