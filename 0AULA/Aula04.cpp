#include <iostream>

using namespace std;

int main() {
	
	int vidas =0;
	double numeroquebrado = 0.0;
	float numeroquebrado2 = 0.0;
	string nome = "Fran";
	char letra = 'M';
	bool vivo = false;

	cout <<  "Dados iniciais:\n" << vidas << "\n" << numeroquebrado << "\n" << numeroquebrado2 << "\n" << nome << "\n" << letra << "\n" << vivo << "\n";
	cout << "------------------------------------------------------------------ \n\n";
	cout << "Digite numero de vidas: \n";
		cin >> vidas;
	cout << "Digite um numero quebrado de 4 digitos: \n";
		cin >> numeroquebrado;
	cout << "Digite um numero quebrado de 2 digitos: \n";
		cin >> numeroquebrado2;
	cout << "Digite seu nome: \n";
		cin >> nome;
	cout << "Digite uma letra: \n";
		cin >> letra;
	cout << "Digite 1 ou 0: \n";
		cin >> vivo;

		cout << "----------------------------------------------------------------- \n";
		cout <<"Dados de saida: \n" << vidas << "\n" << numeroquebrado << "\n" << numeroquebrado2 << "\n" << nome << "\n" << letra << "\n" << vivo << "\n";



	return 0;
}