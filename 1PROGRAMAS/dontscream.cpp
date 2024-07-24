#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Função para exibir uma linha com atraso
void showLine(const string& line, int delay) {
    cout << line << endl;
    this_thread::sleep_for(chrono::milliseconds(delay));
}

int main() {
    // Vetor de linhas da música fictícia
    string lyrics[] = {
        "There is freedom within",
        "There is freedom without",
        "Try to catch the deluge in a paper cup",
        "There's a battle ahead",
        "Many battles are lost"


    };

    // Tempo de atraso entre cada linha (em milissegundos)
    int delay = 1000;

    // Exibir cada linha da música com atraso
    for (const string& line : lyrics) {
        showLine(line, delay);
    }

    return 0;
}