#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <clocale>

using namespace std;

class Ataque {
private:
    string nome;
    int danoMin;
    int danoMax;

public:
    Ataque(string n, int minDano, int maxDano) : nome(n), danoMin(minDano), danoMax(maxDano) {}

    string getNome() const {
        return nome;
    }

    int causarDano() const {
        return rand() % (danoMax - danoMin + 1) + danoMin;
    }
};

class Personagem {
private:
    string nome;
    int saude;
    vector<Ataque> ataques;

public:
    Personagem(string n, int s) : nome(n), saude(s) {}

    string getNome() const {
        return nome;
    }

    int getSaude() const {
        return saude;
    }

    void adicionarAtaque(const Ataque& ataque) {
        ataques.push_back(ataque);
    }

    void receberDano(int dano) {
        saude -= dano;
        if (saude < 0) saude = 0;
    }

    void atacar(Personagem& alvo) {
        if (ataques.empty()) return;

        // Escolher um ataque aleatório
        Ataque ataque = ataques[rand() % ataques.size()];
        int dano = ataque.causarDano();
        cout << nome << " usa " << ataque.getNome() << " e causa " << dano << " de dano a " << alvo.getNome() << "!" << endl;
        alvo.receberDano(dano);
    }

    bool estaVivo() const {
        return saude > 0;
    }

    void status() const {
        cout << nome << " - Saúde: " << saude << endl;
    }
};

void simularLuta(Personagem& p1, Personagem& p2) {
    cout << "A luta começou entre " << p1.getNome() << " e " << p2.getNome() << "!" << endl;

    while (p1.estaVivo() && p2.estaVivo()) {
        p1.atacar(p2);
        if (p2.estaVivo()) {
            p2.atacar(p1);
        }
    }

    if (p1.estaVivo()) {
        cout << p1.getNome() << " venceu a luta!" << endl;
        cout << p1.getNome() << " tem " << p1.getSaude() << " de saúde restante." << endl;
    }
    else {
        cout << p2.getNome() << " venceu a luta!" << endl;
        cout << p2.getNome() << " tem " << p2.getSaude() << " de saúde restante." << endl;
    }
}

int main() {
    // Configura a localidade para português do Brasil com UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    srand(static_cast<unsigned int>(time(0)));

    // Criação de ataques
    Ataque ataque1("Golpe Poderoso", 15, 30);
    Ataque ataque2("Explosão de Fogo", 10, 25);
    Ataque ataque3("Corte Ágil", 5, 20);
    Ataque ataque4("Bola de Fogo", 12, 28);

    // Criação de personagens
    Personagem p1("Guerreiro", 65);
    Personagem p2("Mago", 80);

    // Adicionar ataques aos personagens
    p1.adicionarAtaque(ataque1);
    p1.adicionarAtaque(ataque2);
    p2.adicionarAtaque(ataque3);
    p2.adicionarAtaque(ataque4);

    // Mostrar status inicial
    p1.status();
    p2.status();

    // Simulação da luta
    simularLuta(p1, p2);

    return 0;
}
