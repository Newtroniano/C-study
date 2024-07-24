
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int ano;
	
inicio:
	cout << "Digite um ano de 4 digítos para o programa avaliar se é um ano bissexto: \n";
	cin >> ano;

	
	if (ano >= 1000 && ano <= 9999) {
		cout << "ok\n";
		cout << ano <<"\n";
	
	
	}
	else {
		cout << "Data inválida\n\n";
		goto inicio;
	}


	if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
		cout << ano;
		cout << " Cai em ano bissexto.\n";

	}
	else {

		cout << ano ;
		cout << " Não cai em ano bissexto.\n";

		
			
		}




	return 0;
}

/*while (ano < 3000) {

	ano += 4;
	cout << ano << "\n";
}  para testar o que acontece se colocar esse while dentro do primeiro if ou no final do código fora do último else*/