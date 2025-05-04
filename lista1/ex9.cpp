#include <iostream>
using namespace std;

void entradaDados100(){
    int numero;
    int soma = 0;
    while (soma < 100){
        cout << "Insira seu Número preferido Sr. Alexandre: ";
        cin >> numero;
        soma+=numero;
    }
    cout << "Parabéns prof!! A soma dos seus números é maior que 100!!!: " << soma << "\n";
  
}

int main(){
    entradaDados100();
    return 0;
}