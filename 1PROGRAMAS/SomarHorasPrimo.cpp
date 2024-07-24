
#include <iostream>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float h1; // 1 hora e meia
    float h2; // 1 hora e meia

    std::cout << "Escreva o primeiro horário: \n";
        std::cin >> h1;
    std::cout << "Escreva o segundo horário: \n";
        std::cin >> h2;

    float limit = 0.6;
    float soma = h1 + h2;
    //separa a parte inteira da decimal 
    int parte_inteira = static_cast<int>(std::floor(soma));

    //separa a parte decimal da inteira
    float parte_decimal = soma - floor(soma);

    //tolerancia para aumentar a precisão ao comparar dois decimais
    float tolerancia = 0.0001;


    float horaExtra = 0;


    //verifica se decimal é maior que 60
    if (parte_decimal > limit - tolerancia) {
        std::cout << "A parte decimal é maior que 0.60." << std::endl;
        horaExtra = parte_decimal += 0.40;

    }
    else {
        std::cout << "A parte decimal não é maior que 0.60." << std::endl;
    }

    float result = parte_inteira + parte_decimal;

    std::cout << "Result: " << result << " \n" << std::endl;
    return 0;
}
