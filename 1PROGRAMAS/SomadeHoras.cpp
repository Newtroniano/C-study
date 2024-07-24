#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

void somaComRegra(float& horas, float& minutos) {
    float soma = horas + minutos / 100.0f; // Convertendo os minutos para fração decimal

    // Aplicando a regra de ajuste do decimal
    while (minutos >= 60) {
        minutos -= 60;
        horas += 1;
    }

    cout << "A soma é " << static_cast<int>(horas) << " horas e " << minutos << " minutos" << endl;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    string input;
    cout << "Digite as horas que deseja somar separadas por vírgula (por exemplo, 0.60,0.60): ";
    getline(cin, input);

    stringstream ss(input);
    float horas = 0.0f, minutos = 0.0f;
    char comma;

    while (ss >> horas >> comma >> minutos) {
        somaComRegra(horas, minutos);
    }

    return 0;
}