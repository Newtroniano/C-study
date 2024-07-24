#include <iostream>
using namespace std;

struct Tempo {
    int horas;
    int minutos;
    int segundos;
};

// Função para somar dois tempos
Tempo somarTempos(Tempo t1, Tempo t2) {
    Tempo resultado;

    // Soma dos segundos
    resultado.segundos = t1.segundos + t2.segundos;

    // Soma dos minutos (incluindo carry dos segundos)
    resultado.minutos = t1.minutos + t2.minutos + resultado.segundos / 60;
    resultado.segundos %= 60; // Ajusta os segundos para ficarem entre 0 e 59

    // Soma das horas (incluindo carry dos minutos)
    resultado.horas = t1.horas + t2.horas + resultado.minutos / 60;
    resultado.minutos %= 60; // Ajusta os minutos para ficarem entre 0 e 59

    return resultado;
}

// Função para imprimir um tempo formatado
void imprimirTempo(Tempo tempo) {
    cout << "Tempo: " << tempo.horas << " horas, " << tempo.minutos << " minutos, " << tempo.segundos << " segundos" << endl;
}

int main() {
    Tempo tempoTotal = { 0, 0, 0 };
    char resposta;

    do {
        Tempo temp;
        cout << "Digite o tempo a ser somado (horas minutos segundos): ";
        cin >> temp.horas >> temp.minutos >> temp.segundos;

        // Somar o tempo inserido ao tempo total
        tempoTotal = somarTempos(tempoTotal, temp);

        cout << "Deseja adicionar mais tempo? (S/N): ";
        cin >> resposta;
    } while (resposta == 'S' || resposta == 's');

    // Imprimir o tempo total após todas as adições
    cout << "\nTempo total somado:\n";
    imprimirTempo(tempoTotal);

    return 0;
}