#include <iostream>
using namespace std;

void leituraVetor(int vetor[]){
    cout << "Insira os números do vetor\n";
    for (int i = 0; i < 10; i++){
        cout << "Número " << i+1 << ": ";
        cin >> vetor[i];
    }
}
void exibirVetor(int vetor[]){
    cout << "Vetor Original: ";
    for (int i = 0; i < 10; i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";
}
void maiorNumero(int vetor[]){
    int maior = vetor[0];
    for (int i = 1; i < 10; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    cout << "O maior número do vetor é: " << maior << "\n";
}
void menorNumero(int vetor[]){
    int menor = vetor[0];
    for (int i = 1; i < 10; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    cout << "O menor número do vetor é: " << menor << "\n";
}
int main(){
    int vetor[10];
    leituraVetor(vetor);
    exibirVetor(vetor);
    maiorNumero(vetor);
    menorNumero(vetor);
    return 0;
}