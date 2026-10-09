#include <iostream>
#include <climits>
using namespace std;

int main() {
	int a, b;
	b = INT16_MIN;
	for (int cont = 1; cont <= 10; cont++) {
		cout << "Introduce un numero: ";
		cin >> a;
		if (a > b) {
			b = a;
		}

	}
	
	cout << "El numero mas grande es :" << b;

}
