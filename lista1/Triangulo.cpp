#include <iostream>
using namespace std;

int entradaDados(){
    int numero;
    cout << "Insira seu Número preferido Sr. Alexandre: ";
    cin >> numero;
    return numero;
}
void exibirTriangulo(int num){
    cout << "Seu triângulo!!\n";
    cout << "------------------------\n";
    for(int i =1; i<=num; i++){
        for (int j = 1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }
    cout << "------------------------\n";
}

int main() {
    int num = entradaDados();
    exibirTriangulo(num);
    cout << "\n";
    return 0;
}