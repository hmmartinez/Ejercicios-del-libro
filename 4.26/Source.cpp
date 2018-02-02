#include<iostream>
using namespace std;

int main() {
	int num, a, a1, b, b1, c, c1, d, d1, e;
	cout << "Ingrese un numero: ";
	cin >> num;
	a = num / 10000;
	a1 = num % 10000;
	b = num % 10;
	if (a = !b)
		cout << "No es palindromo" << endl;
	else {
		c = a1 / 1000;
		c1 = a1 % 1000;
		d = c1 / 100;
		d1 = c1 % 100;
		e = d1 / 10;
		if (c == e)
			cout << "Si es palindromo" << endl;
		else
			cout << "No es palindrom0" << endl;
	}

	system("pause");
}