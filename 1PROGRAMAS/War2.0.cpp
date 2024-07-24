#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <clocale>
#include <string>
#include <sstream>

using namespace std;

struct Pais {
    string nome;
    int tropas;
    vector<Pais*> vizinhos;

    // Função para adicionar vizinhos
    void adicionarVizinho(Pais* vizinho) {
        if (find(vizinhos.begin(), vizinhos.end(), vizinho) == vizinhos.end() && vizinho != this) {
            vizinhos.push_back(vizinho);
        }
    }
};

// Função para lançar dados
vector<int> lancarDados(int numDados) {
    vector<int> dados(numDados);
    for (int& dado : dados) {
        dado = rand() % 6 + 1; // Dados de 1 a 6
    }
    return dados;
}

// Função para simular o ataque
void simularAtaque(Pais& atacante, Pais& defensor) {
    int maxDadosAtaque = min(3, atacante.tropas - 1); // O atacante pode rolar até 3 dados
    int maxDadosDefesa = min(2, defensor.tropas);    // O defensor pode rolar até 2 dados

    vector<int> dadosAtaqueRolados = lancarDados(maxDadosAtaque);
    vector<int> dadosDefesaRolados = lancarDados(maxDadosDefesa);

    // Ordenar dados em ordem decrescente
    sort(dadosAtaqueRolados.rbegin(), dadosAtaqueRolados.rend());
    sort(dadosDefesaRolados.rbegin(), dadosDefesaRolados.rend());

    // Determinar o número de batalhas
    int batalhas = min(static_cast<int>(dadosAtaqueRolados.size()), static_cast<int>(dadosDefesaRolados.size()));

    int tropasPerdidasAtaque = 0;
    int tropasPerdidasDefesa = 0;

    // Comparar os dados rolados
    for (int i = 0; i < batalhas; i++) {
        if (dadosAtaqueRolados[i] > dadosDefesaRolados[i]) {
            tropasPerdidasDefesa++;
        }
        else {
            tropasPerdidasAtaque++;
        }
    }

    // Atualizar tropas
    atacante.tropas -= tropasPerdidasAtaque;
    defensor.tropas -= tropasPerdidasDefesa;
}

// Alternativa para to_string, caso necessário
string intParaString(int valor) {
    stringstream ss;
    ss << valor;
    return ss.str();
}

int main() {
    // Configura a localidade para português do Brasil com UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    srand(static_cast<unsigned int>(time(0)));

    // Inicializa 140 países
    vector<Pais> paises(140);

    // Nomeia os países e define tropas iniciais
    for (int i = 0; i < 140; i++) {
        paises[i].nome = "País" + intParaString(i + 1); // Usando a função alternativa, se necessário
        paises[i].tropas = rand() % 12000 + 1; // Número aleatório de tropas entre 1 e 12000
    }

    // Conectar países (exemplo simplificado)
    for (int i = 0; i < 140; i++) {
        vector<int> indicesVizinhos = { i }; // Não adicionar o próprio país como vizinho
        while (indicesVizinhos.size() < 3) {
            int vizinho = rand() % 140;
            if (find(indicesVizinhos.begin(), indicesVizinhos.end(), vizinho) == indicesVizinhos.end() && vizinho != i) {
                indicesVizinhos.push_back(vizinho);
            }
        }
        for (int vizinho : indicesVizinhos) {
            paises[i].adicionarVizinho(&paises[vizinho]);
        }
    }

    // Simulação do jogo
    vector<Pais*> paisesAtivos;
    for (Pais& p : paises) {
        paisesAtivos.push_back(&p);
    }

    while (paisesAtivos.size() > 1) {
        // Filtrar países com vizinhos válidos
        vector<Pais*> paisesComVizinhos;
        for (Pais* p : paisesAtivos) {
            if (!p->vizinhos.empty()) {
                paisesComVizinhos.push_back(p);
            }
        }

        if (paisesComVizinhos.empty()) break; // Se não houver países com vizinhos válidos, termine o jogo

        // Selecionar um país atacante e um defensor
        Pais* atacante = paisesComVizinhos[rand() % paisesComVizinhos.size()];
        Pais* defensor;
        do {
            defensor = atacante->vizinhos[rand() % atacante->vizinhos.size()];
        } while (defensor == atacante || defensor->tropas <= 0); // Garantir que o defensor não é o mesmo que o atacante e tem tropas

        if (atacante->tropas > 1 && defensor->tropas > 0) { // Verifique se o atacante tem tropas suficientes
            cout << atacante->nome << " ataca " << defensor->nome << endl;
            simularAtaque(*atacante, *defensor);

            // Verificar se o defensor foi derrotado
            if (defensor->tropas <= 0) {
                cout << defensor->nome << " foi derrotado!" << endl;
                paisesAtivos.erase(remove(paisesAtivos.begin(), paisesAtivos.end(), defensor), paisesAtivos.end());

                // Atualizar vizinhos dos países restantes
                for (Pais* p : paisesAtivos) {
                    p->vizinhos.erase(remove(p->vizinhos.begin(), p->vizinhos.end(), defensor), p->vizinhos.end());
                }
            }
        }
    }

    // Exibir o vencedor
    if (paisesAtivos.size() == 1) {
        cout << "O vencedor é " << paisesAtivos[0]->nome << endl;
    }
    else {
        cout << "Não há vencedores." << endl;
    }

    return 0;
}