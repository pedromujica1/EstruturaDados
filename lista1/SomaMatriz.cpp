#include <iostream>
using namespace std;

//Função para let a entrada de uma matriz 3x3
void leituraMatriz(int matriz[3][3]) {
    cout << "Digite os elementos da matriz 3x3:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matriz[i][j];
}
void somaMatriz(int A[3][3], int B[3][3], int C[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];
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
    int A[3][3], B[3][3], C[3][3];

    cout << "Digite elementos da matriz A:\n";
    leituraMatriz(A);
    cout << "Digite elementos da matriz B:\n";
    leituraMatriz(B);
    cout << "Matriz soma (C):\n";
    somaMatriz(A, B, C);
    imprimeMatriz(C);
    return 0;
}