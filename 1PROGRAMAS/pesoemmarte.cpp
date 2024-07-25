#include <iostream>
using namespace std;
int main() {
	//escreva seu código abaixo 
	setlocale(LC_ALL, "pt_BR.UTC-8");
	
	double pesoemmarte;
	double pesonaterra;


	cout << "Digite o peso em quilos do item aqui na terra para saber o peso doi objeto em Marte: ";
	cin >> pesonaterra;

	pesoemmarte = (pesonaterra / 9.81) * 3.711;

	cout << "Objeto pesará: " << pesoemmarte << " quilos em marte\n";

} 
