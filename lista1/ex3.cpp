#include <iostream>
#include <algorithm>
using namespace std;

void entradaDados(int &num1,int &num2,int &num3){
    
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    cout << "Insira o terceiro número: ";
    cin >> num3;

}

int maior(int a, int b, int c) {
    int maior = a;
    if (b > maior){
        /* code */
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    return maior;
    //Como outra opção
    //return std::max({a, b, c});
    
}

int main(){
    int num1,num2,num3;
    int maior_num;
    entradaDados(num1,num2,num3);
    
    maior_num = maior(num1,num2,num3);
    cout << "Maior número: " << maior_num << "\n";
    
    return 0;
}