#include <iostream>
using namespace std;

int entradaDados(){
    int numero;
    cout << "Insira seu Número preferido Sr. Alexandre: ";
    cin >> numero;
    return numero;
}
void classificaNumero(int num){

    cout << (num % 2 == 0 ? "Seu número é Par\n" : "Seu número é Ímpar\n");
}
int main (){
    int num = entradaDados();
    classificaNumero(num);
}