#include <iostream>
using namespace std;
#include <cstdlib>

void leituraMedias(int medias[]){
    cout << "Insira as médias de seus alunos Sr. Alexandre\n ";
    for (int i = 0; i< 10; i++){
        cout << "Aluno " << i+1 << ": ";
        cin >> medias[i];
    }
}

int calculaMedias(int medias[]){
    int soma_alunos = 0;
    for (int i = 0; i<10; i++){
        soma_alunos+=i;
    }
    int medias_alunos = soma_alunos / 10;
    return medias_alunos;

}
void exibeAlunos(int medias[]){
    int contador_alunos=0;
    for (int i = 0; i<10; i++){
        if (medias[i] >= 7){
            contador_alunos++;

        }
    }
    cout << "Alunos que ficaram acima da média: " << contador_alunos << "\n"; 
}
void exibeMedias(int medias[]){
    cout << "\n Médias dos alunos!\n";
    cout << "\n ------------------------\n";
    for (int i = 0; i < 10; i++){
        cout << medias[i] << " ";
    }
    cout << "\n ------------------------\n";
}

int main(){
    int meuVetor[10];
    leituraMedias(meuVetor);
    exibeMedias(meuVetor);
    calculaMedias(meuVetor);
    exibeAlunos(meuVetor);
}