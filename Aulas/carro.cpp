#include <iostream>
using namespace std;

class Carro {
    string marca;
    string modelo;
    string cor;
    string placa;
    int velocidade;
    

    void acelarar(){
        velocidade = velocidade *10;
    }
}

int main(){
    Carro meuCarro;
        meuCarro.marca = "Fiat";
        meuCarro.modelo = "Uno";
        meuCarro.cor = "Vermelho";
        meuCarro.placa = "BR-1234";
        meuCarro.velocidade = 32;
        meuCarro.acelarar();
    };
}