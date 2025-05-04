#include <iostream>
#include <cmath>
using namespace std;

void entradaDados(int &num1,int &num2, char &operacao){
    
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    cout << "Insira o símbolo da operação (+,-,/,*): ";
    cin >> operacao;
}
void calculadora(int num1, int num2, char operacao){
    switch (operacao){
        case '+': cout << "Resultado da Soma: " << num1+num2 << "\n"; break;
        case '-': cout << "Resultado da Subtração: " << num1-num2 << "\n"; break;
        case '*': cout << "Resultado da Multiplicação: " << num1*num2 << "\n"; break;
        case '/': 
            if (num2 != 0){
                cout << "Divisão: " << num1/num2 << "\n"; 
            }
            else{
                cout << "Divisão por zero não é permitida!\n";
            }
            break;
    default: cout << "Operação inválida.\n"; 
    }
}
int main(){

    int num1,num2;
    char operacao;
    entradaDados(num1,num2,operacao);
    calculadora(num1,num2,operacao);
    return 0;
}
