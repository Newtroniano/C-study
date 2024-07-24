#include <iostream>
#include <locale>
using namespace std;

int main() {

    // Configurar o local para o ambiente do sistema
    cout << "________________________________________________________________\n\n";
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Exemplo de strings com acentos
    string texto = "Olá, mundo! Ç, á, é, í, ó, ú, ã, õ.";

    // Exibir texto
    cout << texto << endl;
    cout << "________________________________________________________________\n\n";
    return 0;
}