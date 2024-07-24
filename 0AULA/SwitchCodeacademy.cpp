#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "pt_BR.UTC-8");
    int number;
    char option;
    inicio:

    cout << "\nDigite um número de 1 até 9!\n";
    cin >> number;

    switch (number) {

    case 1:
        std::cout << "Bulbusaur\n\n";
        break;
    case 2:
        std::cout << "Ivysaur\n\n";
        break;
    case 3:
        std::cout << "Venusaur\n\n";
        break;
    case 4:
        std::cout << "Charmander\n\n";
        break;
    case 5:
        std::cout << "Charmeleon\n\n";
        break;
    case 6:
        std::cout << "Charizard\n\n";
        break;
    case 7:
        std::cout << "Squirtle\n\n";
        break;
    case 8:
        std::cout << "Wartortle\n\n";
        break;
    case 9:
        std::cout << "Blastoise\n\n";
        break;
    default:
        std::cout << "Unknown\n";
        break;

    }

    cout << "Deseja escolher outro ? [s ou n]";
        cin >> option;

    if (option == 's' or option == 'S') {
        goto inicio;
    }
}