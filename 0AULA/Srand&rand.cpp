#include <iostream>
#include <cstdlib> // Para srand e rand
#include <ctime>   // Para time

int main() {
    // Inicializa a semente do gerador de números aleatórios com o tempo atual
    srand(time(0));

    // Gera e exibe 5 números aleatórios
    for (int i = 0; i < 5; ++i) {
        std::cout << rand() << std::endl;
    }

    return 0;
}