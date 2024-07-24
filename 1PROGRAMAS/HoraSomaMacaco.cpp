#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

struct Tempo {
    int horas = 0;
    float minutos = 0.0f;
};

// Função para somar dois tempos
Tempo somarTempos(Tempo t1, Tempo t2) {
    Tempo resultado = { 0, 0.0f };

    resultado.minutos = t1.minutos + t2.minutos;

    // Verifica se a parte decimal é maior ou igual a 0.60 para ajustar
    while (resultado.minutos >= 0.60) {
        resultado.minutos -= 0.60f;
        resultado.horas++;
    }

    resultado.horas += t1.horas + t2.horas;

    return resultado;
}

// Função para imprimir um tempo formatado
void imprimirTempo(Tempo tempo) {
    cout << "Tempo total: " << tempo.horas << " horas e " << fixed << setprecision(2) << tempo.minutos << " minutos" << endl;
}

int main() {
    Tempo tempoTotal = { 0, 0.0f };
    char resposta;

    do {
        Tempo temp = { 0, 0.0f };
        string input;

        cout << "Digite os tempos a serem somados (horas.minutos separados por vírgula): ";
        getline(cin, input);

        stringstream ss(input);
        char comma;

        // Processa os tempos da entrada
        while (ss >> temp.horas >> comma >> temp.minutos) {
            // Somar o tempo inserido ao tempo total
            tempoTotal = somarTempos(tempoTotal, temp);
        }

        cout << "Deseja adicionar mais tempos? (S/N): ";
        cin >> resposta;
        cin.ignore(); // Limpar o buffer de entrada

    } while (resposta == 'S' || resposta == 's');

    // Imprimir o tempo total após todas as adições
    cout << "\nTempo total somado:\n";
    imprimirTempo(tempoTotal);

    return 0;
}
