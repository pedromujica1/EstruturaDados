#include <iostream>
using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    string cor;
    string placa;
    int velocidade;

public:
    void setMarca(string m) { marca = m; }
    void setModelo(string mod) { modelo = mod; }
    void setCor(string c) { cor = c; }
    void setPlaca(string p) { placa = p; }
    void setVelocidade(int v) { velocidade = v; }

    string getMarca() { return marca; }
    string getModelo() { return modelo; }
    string getCor() { return cor; }
    string getPlaca() { return placa; }
    int getVelocidade() { return velocidade; }

    // Métodos para funcionalidade
    void acelerar() {
        velocidade *= 10;
    }

    void frear() {
        velocidade /= 10;
    }

    void exibirInfo() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Cor: " << cor << endl;
        cout << "Placa: " << placa << endl;
        cout << "Velocidade: " << velocidade << endl;
    }

    void buzinar() {
        cout << "Buzinando: BEEP BEEP!" << endl;
    }
};

int main() {
    Carro meuCarro;

    meuCarro.setMarca("Fiat");
    meuCarro.setModelo("Uno");
    meuCarro.setCor("Vermelho");
    meuCarro.setPlaca("BR-1234");
    meuCarro.setVelocidade(32);

    meuCarro.acelerar();
    meuCarro.exibirInfo();
    meuCarro.buzinar();

    return 0;
}