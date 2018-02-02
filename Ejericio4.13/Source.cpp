#include <iostream>
using namespace std;

int main() {
	double klm;
	double litro;

	double totalL = 0;
	double totalK = 0;

	do {
		cout << "\nIngrese los kilometros usados (-1 para salir): ";
		cin >> klm;

		if (klm == -1) {
			break;
		}

		cout << "Ingrese los litros: ";
		cin >> litro;

		totalL += litro;
		totalK += klm;

		cout << "KPL en este reabastecimiento: " << klm / litro << endl;
		cout << "Total KPL: " << totalK / totalL << endl;

	} while (klm != -1);

	system("pause");
}