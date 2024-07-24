

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int num1;
	int num2;

	cout << "Digite o número inicial: \n";
	cin >> num1;

	cout << "Digite o número final: \n";
	cin >> num2; cout << endl;
	

	while (num1 <= num2) {
		cout << num1++ << "\n";
	}
	


	return 0;
}

