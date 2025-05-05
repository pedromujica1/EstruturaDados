#include <iostream>
#include <cmath>
using namespace std;   

int entradaDados(){
    int numero;
    std::cout << "Insira seu Número preferido Sr. Alexandre: ";
    std::cin >> numero;
    return numero;
}

bool verificaPrimo(int num){
    bool primo = true;
    if (num <= 1){return false;}
    if (num <= 3){return primo;}
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    int i = 5;
    int w = 2;
    do {
        if (num % i == 0) return false;
        i += w;
        w = 6 - w; //Alterna entre 2 e 4 (para 6k±1)
    } while (i * i <= num);
    
    return true;
}

void exibirMensagem(int num){
    if (verificaPrimo(num)){
        cout << "O número " << num << " é primo!\n";
    }
    else{
        cout << "O número " << num << " não é primo!\n";
    }
}

int main(){ 
    int num = entradaDados();
    verificaPrimo(num);
    exibirMensagem(num);
    return 0;
}