#include <iostream>
#include <cmath>
using namespace std;   

int entradaDados(){
    int numero;
    std::cout << "Insira seu Número preferido Sr. Alexandre: ";
    std::cin >> numero;
    return numero;
}
void exibirFatorial(int num){
    cout << "------------------------\n";
    int fatorial = 1;
    while (num > 1){
        fatorial *= num;
        num--;
    }
    cout << "Fatorial: " << fatorial << "\n";
    cout << "------------------------\n";
}
int main(){
    int num = entradaDados();
    exibirFatorial(num);
    return 0;

}