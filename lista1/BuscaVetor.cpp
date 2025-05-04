#include <iostream>
using namespace std;

void leituraVetor(int meuVetor[]){
    cout << "Insira os números do vetor\n";
    for (int i = 0; i < 10; i++){
        cout << "Número " << i+1 << ": ";
        cin >> meuVetor[i];
    }
}
int leituraElemento(){
    int elemento;
    cout << "Digite um elemento para ser buscado no vetor: ";
    cin >> elemento;
    return elemento;

}
void buscaVetor(int meuVetor[], int elemento){
    bool verificarElemento = false;
    for (int i = 0; i < 10; i++)
    {
        if (meuVetor[i] == elemento)
        {
            verificarElemento = true;
            break;
        }
    }
    if (!verificarElemento) {
        cout << "Valor não encontrado.\n";
    }
    else {
        cout << "Valor encontrado.\n";
    }
}

void imprimeVetor(int meuVetor[]){
    cout << "Vetor Original: ";
    for (int i = 0; i < 10; i++){
        cout << meuVetor[i] << " ";
    }
    cout << "\n";
}
int main(){
    int vetorExemplo[10];
    leituraVetor(vetorExemplo);
    imprimeVetor(vetorExemplo);
    int valorEspecifico= leituraElemento();
    buscaVetor(vetorExemplo,valorEspecifico);
    return 0;

}