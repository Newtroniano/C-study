#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "pt_BR.UTC-8");
    double peso;
    int planeta;

    std::cout << "Qual o seu peso aqui na terra? (Digite o número e aperte enter): ";
    std::cin >> peso;

    std::cout << "\n Trago informações para você sobre os planetas de destino!\n";
    std::cout << "\n 1 = Mercúrio   2 = Vênus  3 = Marte 4 = Júpiter ";
    std::cout << " 5 = Saturno  6 = Urano  7 = Netuno\n\n ";
    std::cout << "Para qual planeta você deseja sair na porrada? (Digite o número e aperte enter)\n ";
    std::cin >> planeta;

    switch (planeta) {
    case 1:
        std::cout << "Seu peso em Mercúrio é " << peso * 0.38;
        break;
    case 2:
        std::cout << "Seu peso em Vênus é " << peso * 0.91;
        break;
    case 3:
        std::cout << "Seu peso em Marte é " << peso * 0.38;
        break;
    case 4:
        std::cout << "Seu peso em Júpiter é " << peso * 2.34;
        break;
    case 5:
        std::cout << "Seu peso em Saturno é " << peso * 1.06;
        break;
    case 6:
        std::cout << "Seu peso em Urano é " << peso * 0.92;
        break;
    case 7:
        std::cout << "Seu peso em Netuno é " << peso * 1.19;
        break;
    default:
        std::cout << "Valor Inválido\n";
        break;
    }
    cout << "\n";

    if (planeta == 1) {

        peso = peso * 0.38;

    }
    else if (planeta == 2) {

        peso = peso * 0.91;

    }
    else if (planeta == 3) {

        peso = peso * 0.38;

    }
    else if (planeta == 4) {

        peso = peso * 2.34;

    }
    else if (planeta == 5) {

        peso = peso * 1.06;

    }
    else if (planeta == 6) {

        peso = peso * 0.92;

    }
    else if (planeta == 7) {
        peso = peso * 1.19;
    }

    std::cout << "\nSeu peso no planeta de destino é " << peso << "\n";





    return 0;

}