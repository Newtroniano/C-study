#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int num1 = 0;
    int num2 = 0;

    cout << "Digite o número inicial: \n";
    cin >> num1;

    cout << "Digite o número final: \n";
    cin >> num2;
    cout << endl;

    ofstream outFile("saida.txt");
    if (!outFile) {
        cerr << "Erro ao abrir o arquivo para escrita." << endl;
        return 1;
    }

    do {
        outFile << num1++ << "\n";
    } while (num1 <= num2);

    outFile.close();
    cout << "Números salvos no arquivo 'saida.txt'." << endl;

    return 0;
}