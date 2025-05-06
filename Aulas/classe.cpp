#include <iostream>

using namespace std;

class Lampada{
    private:
    int voltagem;
    int potencia;
    string cor;
    int luminosidade;
    bool ligada;
    public:
    Lampada(int v, int p, string c, int l){
        voltagem = v;
        potencia = p;
        cor = c;
        luminosidade=l;
        ligada = false;
    }

    //Definindo Metódos
    void acender(){
        ligada = true;
        cout << "A Lampada está acessa!!" << endl;
    }
    void apagar(){
        ligada = false;
        cout << "A LAMPADA APAGOU!!" << endl;
    }
    void iluminar(){
        if (ligada){
            cout << "A lampada está iluminando!" << luminosidade << "lumens na cor" << cor << "." << endl;
        }
        else{
            cout << "A lampada apagada não ilumina" << endl;
        }
    }
    void exibirInfo(){
        cout << "\nVoltagem: " << voltagem;
        cout << "\nPotencia: " << potencia;
        cout << "\nLuminosidade: " << luminosidade << "\n";
        cout << "\nCor: " << cor<< "\n" << endl;

    }
};

int main(){
    Lampada lampada1(220,6,"Branca",700);
    lampada1.exibirInfo();
    lampada1.acender();
    lampada1.apagar();
    lampada1.iluminar();
    return 0;

}