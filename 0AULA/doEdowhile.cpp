#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x = 5;

    do {
        cout << "Dentro do laço do-while: x = " << x << endl;
        x++;
    } while (x < 5);

    cout << "Fora do laço do-while: x = " << x << endl;
    return 0;
}