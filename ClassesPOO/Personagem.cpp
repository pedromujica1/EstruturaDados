#include <iostream>
using namespace std;

class Personagem {
private:
    int id_personagem;
    string nome;
    int vida;
    float ataque;
    float defesa;

public:
    void setId(int id) { id_personagem = id; }
    void setNome(string name) { nome = name; }
    void setVida(int hp) { vida = hp; }
    void setAtaque(float atk) { ataque = atk; }
    void setDefesa(float def) { defesa = def; }

    int getId() { return id_personagem; }
    string getNome() { return nome; }
    int getVida() { return vida; }
    float getAtaque() { return ataque; }
    float getDefesa() { return defesa; }

    void sofrerDano(float valor_ataque) {
        int dano = (valor_ataque - defesa);
        if (dano < 0) dano = 0;
        vida -= dano;
        if (vida < 0) vida = 0;
        cout << nome << " sofreu " << dano << " de dano. Vida restante: " << vida << endl;
    }


    void atacar(Personagem &alvo) {
        cout << nome << " atacou " << alvo.getNome() << " com " << ataque << " de ataque!" << endl;
        alvo.sofrerDano(ataque);
    }

    void exibirInfo() {
        cout << "ID: " << id_personagem << endl;
        cout << "Nome: " << nome << endl;
        cout << "Vida: " << vida << endl;
        cout << "Ataque: " << ataque << endl;
        cout << "Defesa: " << defesa << endl;
        cout << endl;
    }
};

int main() {
    Personagem protagonista;
    Personagem vilao;

    protagonista.setId(1);
    protagonista.setNome("Frodo Baggins");
    protagonista.setVida(500);
    protagonista.setAtaque(50);
    protagonista.setDefesa(20);

    vilao.setId(2);
    vilao.setNome("Sauron");
    vilao.setVida(200);
    vilao.setAtaque(300);
    vilao.setDefesa(30);

    cout << "== Personagem Protagonista ==" << endl;
    protagonista.exibirInfo();
    cout << "\n== Personagem Vilão ==" << endl;
    vilao.exibirInfo();

    cout << "\nO vilão ataca o protagonista!" << endl;
    vilao.atacar(protagonista);

    cout << "\nStatus final do protagonista:" << endl;
    protagonista.exibirInfo();

    return 0;
}
