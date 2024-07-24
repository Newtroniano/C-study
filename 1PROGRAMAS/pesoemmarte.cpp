#include <iostream>

int main() {
	// Add your code below  
	
	double pesoemmarte;
	double pesonaterra;


	std::cout << "Digite o peso em quilos do item aqui na terra: ";
	std::cin >> pesonaterra;

	pesoemmarte = (pesonaterra / 9.81) * 3.711;

	std::cout << "Objeto pesara: " << pesoemmarte << " quilos em marte\n";

} 
