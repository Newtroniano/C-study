

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int n1, n2, n3, n4, maior;

	cout << "Digite o 1º número\n";
	cin >> n1;
	cout << "Digite o 2º número\n";
	cin >> n2;
	cout << "Digite o 3º número\n";
	cin >> n3;
	cout << "Digite o 4º número\n";
	cin >> n4;


	maior = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n1 > n4) ? n1 : n4) : ((n3 > n4) ? n3 : n4) : ((n2 > n3) ? n2 : n3) : ((n2 > n4) ? n2 : n4);

	cout << "O maior valor é: " << maior << "\n";

	return 0;
}

