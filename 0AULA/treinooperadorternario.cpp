#include <iostream>
using namespace std;

int main() {
    // setlocale não é necessário para este exemplo específico de comparação de números
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n1, n2, n3, n4, maior;

    cout << "Digite o 1º número\n";
    cin >> n1;
    cout << "Digite o 2º número\n";
    cin >> n2;
    cout << "Digite o 3º número\n";
    cin >> n3;
    cout << "Digite o 4º número\n";
    cin >> n4;

    // Corrigindo a lógica do operador ternário aninhado para comparar quatro números
    maior = (n1 > n2) ? ((n1 > n3) ? ((n1 > n4) ? n1 : n4) : (n3 > n4) ? n3 : n4) :
        ((n2 > n3) ? ((n2 > n4) ? n2 : n4) : (n3 > n4) ? n3 : n4);

    cout << "O maior valor é: " << maior << endl;

    return 0;
}
