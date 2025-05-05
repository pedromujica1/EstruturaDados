#include <iostream>
using namespace std;


void entradaDados(int meuVetor[]){;
    cout << "Insira seus números preferidos Sr. Alexandre\n ";
    for (int i = 0; i< 10; i++){
        cout << "Número " << i+1 << ": ";
        cin >> meuVetor[i];
    }
}
void exibirVetor(int meuVetor[]){
    cout << "Vetor Original: ";
    for (int i = 0; i < 10; i++){
        cout << meuVetor[i] << " ";
    }   
}

void reverterVetor(int meuVetor[]){
    int vetor_reverso[10];
    for (int i = 0; i < 10; i++){
        vetor_reverso[i] = meuVetor[9-i];
    }
    exibirVetor(vetor_reverso);
}


int main(){
    int vetor_principal[10];
    entradaDados(vetor_principal);
    exibirVetor(vetor_principal);
    reverterVetor(vetor_principal);
    cout << "\n";
    return 0;

}
