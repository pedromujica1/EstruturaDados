#include <iostream>
using namespace std;

int entradaDados(){
    int numero;
    cout << "Insira a quantidade de n termos do Fiboniacci Sr. Alexandre: ";
    cin >> numero;
    return numero;
}
void exibirFibonacci(int n){
    int a = 0, b = 1, c;
    cout << "------------------------\n";
    cout << "Sequência de Fibonacci: \n";
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++){
        c = a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    cout << "\n------------------------\n";
}

int main(){
    int n = entradaDados();
    exibirFibonacci(n);
    cout << "\n";
    return 0;
}