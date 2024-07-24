
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int num1;
	char continuar = 's';

	while (continuar == 's') {
		cout << "Digite um número de 0 até 20!\n";
		cin >> num1; "\n\n";

		if (num1 < 10) {
			cout << "Número digitado menor do que 10!\n\n";
		}

		else if (num1 == 10) {
			cout << "Número igual à 10\n\n";
		}

		else {
			cout << "Número digitado maior do que 10!\n\n";
		}
		cout << "Deseja continuar? (s para sim e qualquer letra para sair): \n";
		cin >> continuar;
	}

	return 0;
}

