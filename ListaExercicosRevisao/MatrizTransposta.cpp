#include <iostream>
using namespace std;

//Função para let a entrada de uma matriz 3x3
void leituraMatriz(int matriz[3][3]) {

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];
}
void geraMatrizTransposta(int matriz[3][3], int matrizTransposta[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            matrizTransposta[j][i] = matriz[i][j];
}
//Função para imprimir a matriz resultante
void imprimeMatriz(int matriz[3][3]) {
    cout << "Matriz resultante:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
}


int main() {
    int minhaMatriz[3][3];
    int matrizTransposta[3][3];

    cout << "Digite a matriz 3x3:\n";
    leituraMatriz(minhaMatriz);
    geraMatrizTransposta(minhaMatriz, matrizTransposta);

    cout << "Matriz transposta:\n";
    imprimeMatriz(matrizTransposta);
    
}
