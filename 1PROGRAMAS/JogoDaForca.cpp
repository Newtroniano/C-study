#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    string resposta;
    string palavra_oculta;
    int erros = 0;
    int acertos = 0;
    char letra;
    int max;

    cout << "************ Jogo da Forca ************" << endl;
    cout << "************** Jogador 1 **************" << endl << endl;
    cout << "Utilize apenas letras minúsculas." << endl;
    cout << "Máximo de 20 letras" << endl << endl;

    cout << "Digite a palavra secreta: ";
    cin >> resposta;
    max = resposta.length();

    palavra_oculta = string(max, '_');

    cout << "\033[H\033[J";  // ANSI escape code para limpar a tela

    cout << "************ Jogo da Forca ************" << endl;
    cout << "************** Jogador 2 **************" << endl << endl;
    cout << "Utilize apenas letras minúsculas." << endl;
    cout << "Limite de 6 erros. Palavra de até 20 letras" << endl << endl;

    while (erros < 6 && acertos < max) {
        cout << "Palavra: " << palavra_oculta << endl;
        cout << "Digite uma letra: ";
        cin >> letra;

        bool encontrou = false;
        for (int i = 0; i < max; i++) {
            if (resposta[i] == letra) {
                if (palavra_oculta[i] != letra) {
                    palavra_oculta[i] = letra;
                    acertos++;
                    encontrou = true;
                }
            }
        }

        if (!encontrou) {
            erros++;
        }

        cout << "Acertos: " << acertos << " - Erros: " << erros << endl;
    }

    if (acertos == max) {
        cout << "Parabéns! Você venceu!" << endl;
    }
    else {
        cout << "Você perdeu! A palavra era: " << resposta << endl;
    }

    return 0;
}