#include <iostream>
using namespace std;

const int TAM = 3;
char tabuleiro[TAM][TAM];

void inicializarTabuleiro() {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = ' ';
}

void mostrarTabuleiro() {
    cout << "\n";
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << " " << tabuleiro[i][j];
            if (j < TAM - 1) cout << " |";
        }
        cout << "\n";
        if (i < TAM - 1) cout << "---+---+---\n";
    }
    cout << "\n";
}
bool verificarVitoria(char jogador) {
    //linhas e colunas
    for (int i = 0; i < TAM; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador))
            return true;
    }

    //diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador))
        return true;

    return false;
}

bool verificarEmpate() {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            if (tabuleiro[i][j] == ' ')
                return false;
    return true;
}

//Implementação da jogada
void fazerJogada(char jogador) {
    int linha, coluna;
    while (true) {
        cout << "Jogador " << jogador << ", informe linha e coluna (0 a 2): ";
        cin >> linha >> coluna;

        if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM && tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = jogador;
            break;
        } else {
            cout << "Posição inválida. Tente novamente.\n";
        }
    }
}

// Função principal
int main() {
    char jogadorAtual = 'X';
    inicializarTabuleiro();

    while (true) {
        mostrarTabuleiro();
        fazerJogada(jogadorAtual);

        if (verificarVitoria(jogadorAtual)) {
            mostrarTabuleiro();
            cout << "Jogador " << jogadorAtual << " venceu!\n";
            break;
        }

        if (verificarEmpate()) {
            mostrarTabuleiro();
            cout << "Empate!\n";
            break;
        }

        // Troca de jogador
        jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
    }

    return 0;
}
