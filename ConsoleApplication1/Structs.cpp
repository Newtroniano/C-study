#include <iostream>
#include <string>
using namespace std;




struct Retangulo {
    float base;
    float altura;
};



float calculoArea(Retangulo r) {
    float area = r.base * r.altura;

    return area;
}


void main() {
    
    Retangulo r;

    cout << "Ola seu verme digite a base do retangulo";
    cin >> r.base;

    cout << "Ola seu lixo humano digite a alura do retangulo";
    cin >> r.altura;

    float area = calculoArea(r);

    cout << "Olha essa porra ai seu babaca" << area << "\n\n";


}


