#include <iostream>
#include <cmath>
using namespace std;

int entradaDados(){
    int numero;
    cout << "Insira seu mẽs preferido Sr. Alexandre: ";
    cin >> numero;
    return numero;
}

void exibirDias (int mes){
    switch (mes)
    {
    case 2: cout <<" Fevereiro tem 28 dias\n"; break;
    case 4: case 6: case 9: case 11: cout <<"Seu mês tem 30 dias professor Alexandre\n"; break;
    default: cout << "O mẽs tem 31 dias!!!!\n"; break;
    }
}

int main(){
    int mes = entradaDados();
    exibirDias(mes);
    return 0;

}