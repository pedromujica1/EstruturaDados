#include <iostream>
#include <cmath>
using namespace std;

void leituraEntrada(int &base, int &expoente){
    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> expoente;
    if (expoente <= 0) {
        cout << "Expoente negativo não é permitido. Usando expoente 2.\n";
        expoente = 2;
    }
    
}

void calculaPotencia(int base, int expoente){
    int resultado = pow(base, expoente);
    cout << "Resultado: " << resultado << endl;
}
int main(){
    int base, expoente;
    leituraEntrada(base, expoente);
    calculaPotencia(base, expoente);
    return 0;

}