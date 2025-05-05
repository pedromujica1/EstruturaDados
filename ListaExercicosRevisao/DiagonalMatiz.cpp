#include <iostream>
using namespace std;

//Função para let a entrada de uma matriz 3x3
void leituraMatriz(int matriz[3][3]) {
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];
}
void somaDiagonalMatriz(int A[3][3]) {
    int somaDiagonalA = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            somaDiagonalA += A[i][i];
    cout << "Soma da diagonal principal: " << somaDiagonalA << endl;
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
    int A[3][3];

    leituraMatriz(A);
    somaDiagonalMatriz(A);
    imprimeMatriz(A);
    return 0;
}
