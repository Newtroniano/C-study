#include <iostream>
using namespace std;


int main() {

	int i = 0;
	int quadrado = 0;

	// Escreva um loop aqui:

	while (i < 10 && quadrado < 81) {  //Codeacademy deu outro jeito de fazer mas foi assim que pensei.
		
		quadrado = i * i;
		
      cout << i << " - " << quadrado << "\n";

	  i++; // Não estava sabendo como fazer o loop iniciar em 0, era só colocar o incremento em i aqui, lógico.
	}
	

	cout << i << " " << quadrado ; //Meu jeito saiu essa saída nada a ver com números quadrados no final, pensei que sairia.
}






//x=x+1 , x++ 