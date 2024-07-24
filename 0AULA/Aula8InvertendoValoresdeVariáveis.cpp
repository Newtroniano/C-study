

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int  num=10;
	
	cout << num << "\n\n";

	num = num * -1; //ou
	//num = -num;

	cout << num << "\n\n";
	cout << -num << "\n\n"; // -num no cout não transforma a variável
	cout << num << "\n\n";

		return 0;
}

