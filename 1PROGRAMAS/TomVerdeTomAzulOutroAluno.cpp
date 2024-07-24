#include <iostream>

using namespace std;

int main() {

	int valor, tomverde, tomazul;

inicio:

	cout << "\nSelecione uma cor: \n";
	cout << "[1]= Verde  [2]= Azul :   ";

	cin >> valor;

	switch (valor) {

		// FORNECE OS MENUS PARA VERDE E AZUL;

	case 1:
		cout << "Agora escolha o tom do verde\n";
		cout << "[7]= Verde claro   [8]= Verde escuro:    ";
		cin >> tomverde;

		switch (tomverde) {

			// FORNECE OS SUBMENUS DE VERDE

		case 7:
			cout << "Escolheste o tom claro.\n";
			break;
		case 8:
			cout << "Escolheste o tom escuro.\n";
			break;
		default:
			cout << "Comando inexistente.\n";
		}
		break;


	case 2:
		cout << "Agora escolha o tom do azul\n";
		cout << "[4]= Azul claro   [5]= Azul escuro:    ";
		cin >> tomazul;

		switch (tomazul) {

			// FORNECE OS SUBMENUS DE AZUL

		case 4:
			cout << "Escolheste o tom claro.\n";
			break;
		case 5:
			cout << "Escolheste o tom escuro.\n";
			break;
		default:
			cout << "Comando inexistente.\n";
		}
		break;



	default:
		cout << "Comando inexistente\n";
	}

	cout << "\nFim da pesquisa.\n";

	goto inicio;

	// COLOQUEI GOTO PARA FICAR TESTANDO. É UM LOOPING INFINITO DE PESQUISA.


	return 0;
}