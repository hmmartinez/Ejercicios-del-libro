#include <iostream>
using namespace std;

int main() {
	int num;

		cout << "Ingrese un numero para determinar si es par o impar, o ingrese '1' para salir: ";
		cin >> num;

		if (num % 2 == 0) {
			cout << "\nEl numero es par." << endl;
		}
		else {
			cout << "\nEl numero es impar." << endl;
		}

	system("\npause");
}