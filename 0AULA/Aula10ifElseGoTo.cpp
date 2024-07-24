#include <iostream>  // Biblioteca que permite a entrada e saída de dados.
#include <cstdlib>   // Biblioteca que contém funções de utilidade geral, como a função rand().
#include <ctime>     // Biblioteca que contém funções para manipulação de tempo.
using namespace std; // Facilita o uso de elementos da biblioteca padrão do C++.

int main() // Função principal onde a execução do programa começa.
{
comeco: // Rótulo que permite retornar a esta parte do código usando goto.

	system("cls"); // Comando do sistema que limpa o console.

	setlocale(LC_ALL, "pt_BR.UTF-8"); // Configura a localidade para português do Brasil, para suportar caracteres especiais.

	srand(time(0)); // Inicializa o gerador de números aleatórios com o tempo atual.

	char option; // Declara uma variável para armazenar a opção do usuário.
	int soma = 0; // Declara e inicializa a variável soma com 0.

	for (int i = 0; i < 5; i++) { // Loop que se repete 5 vezes.
		int ran = rand() % 101; // Gera um número aleatório entre 0 e 99.
		cout << "Valor nota " << i + 1 << ": " << ran << endl; // Exibe o valor gerado.
		soma += ran; // Adiciona o valor gerado à variável soma.
	}
	double media = static_cast<double>(soma) / 5; // Calcula a média dos valores gerados.

	cout << "\nA média da nota do aluno é: " << media << "\n\n"; // Exibe a média das notas.

	if (media >= 70) { // Verifica se a média é maior ou igual a 70.
		cout << "Aluno passou:D \n"; // Se a condição for verdadeira, exibe que o aluno passou.
	}
	else if (media >= 50) { // Verifica se a média é maior ou igual a 50.
		cout << "Aluno em recuperação :P \n"; // Se a condição for verdadeira, exibe que o aluno está em recuperação.
	}
	else { // Se nenhuma das condições anteriores for verdadeira.
		cout << "\nAluno reprovado :( \n"; // Exibe que o aluno foi reprovado.
	}
	cout << "______________________________________________________________\nDeseja gerar outra nota aleatória ? [s ou n]  "; // Pergunta ao usuário se ele deseja gerar outra nota.
	cin >> option; // Lê a opção do usuário.

	if (option == 's' or option == 'S') { // Verifica se a opção é 's' ou 'S'.
		goto comeco; // Se a condição for verdadeira, volta ao rótulo 'comeco'.
	}

	return 0; // Retorna 0 indicando que o programa terminou com sucesso.
}

