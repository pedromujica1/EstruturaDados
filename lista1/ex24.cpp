#include <iostream>
#include <algorithm>
using namespace std;

void zerarNumeros(int &num1,int &num2,int &num3){
    
    num1 = num2 = num3 = 0;

}
void entradaDados(int &num1,int &num2,int &num3){
    
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    cout << "Insira o terceiro número: ";
    cin >> num3;

}

int main(){
    int num1,num2,num3;
    entradaDados(num1,num2,num3);
    cout << "Números inseridos: " << num1 << ", " << num2 << ", " << num3 << "\n";
    cout << "Zerando os números...\n"; 
    zerarNumeros(num1,num2,num3);   
    cout << "Números zerados: " << num1 << ", " << num2 << ", " << num3 << "\n";
    return 0;
}