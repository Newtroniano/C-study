#include <iostream>
#include <cmath>

// Função para verificar se um número é primo
bool ehPrimo(long long num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (ehPrimo(numero)) {
        std::cout << "O número " << numero << " é primo." << std::endl;
    }
    else {
        std::cout << "O número " << numero << " não é primo." << std::endl;
    }

    return 0;
}