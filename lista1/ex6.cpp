#include <iostream>
using namespace std;

int entradaDados(){
    int numero;
    cout << "Insira seu Número preferido Sr. Alexandre: ";
    cin >> numero;
    return numero;
}
void exibiTabuada(int num){
    cout << "\nTabuada do número: " << num << "\n";
    cout << "------------------------\n";
    for (int i = 1; i<=10; i++){
        cout << num << " x " << i << " = " << num*i << "\n";
    }
    cout << "------------------------\n";

}
int main(){
    int num = entradaDados();
    exibiTabuada(num);
    return 0;
}