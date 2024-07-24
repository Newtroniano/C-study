#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int guess;

    int tries = 0;

    cout << "Eu tenho um número de 1 até 10.\n";
    cout << "Por favor tente adivinhar: \n";
    cin >> guess;

    // Write a while loop here:
    while (guess != 8 && tries < 50) {
       cout << "Resposta errada\n";
       cin >> guess;
        tries++;

    }




    if (guess == 8) {

        cout << "\nParabéns, você acertou!\n";

    }
    return 0;
}