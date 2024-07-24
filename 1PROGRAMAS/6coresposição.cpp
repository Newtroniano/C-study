

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int num;
	int posi;

	cout << "Cores: (1)Laranja,(2)Vermelho,(3)Roxo,(4)Vinho,(5)Amarelo e (6)Verde claro\n";
	cout << "Digite um número para saber qual cor cairá na posição digitada: \n";
	
	cin >> num;


	posi = ( num - 1) % 6 + 1;

	//cout << posi << "\n\n";

	switch (posi) {
	
	case 1:cout << "Laranja\n";break;
	case 2:cout << "Vermelho\n";break;
	case 3:cout << "Roxo\n";break;
	case 4:cout << "Vinho\n";break;
	case 5:cout << "Amarelo\n";break;
	case 6:cout << "Verde Claro\n";break;
	default:cout << "Erro";break;

	}

	return 0;
}


