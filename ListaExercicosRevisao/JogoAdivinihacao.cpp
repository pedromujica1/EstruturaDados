#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

void telaInicial(){
    cout << "------------------------\n";
    cout << "Bem-vindo ao Jogo de Adivinhação Sr Alexandre Piton Nassar!\n";
    cout << "Tente adivinhar o número entre 1 e 10.\n";
    cout << "------------------------\n";
}
void telaCarregamento(int segundos){
    cout << "------------------------\n";
    cout << "Aguarde um momento...\n";
    for (int i = 0; i < segundos; i++){
        cout << ".";
        sleep(1);
    }
    cout << "\n------------------------\n";
}

int gerarNumeroAleatorio(){
    srand(time(0));
    int randomNum = rand() % 10+1; //Gera um número aleatório entre 1 e 10
    return randomNum;
}
void entradaDados(int &numTentativas, int &numeroAleatorio){
    cout << "Insira o número de tentativas: ";
    cin >> numTentativas;
    numeroAleatorio = gerarNumeroAleatorio();
    cout << "Número aleatório gerado entre 1 e 100.\n";
}
void exibirDica(int numeroAleatorio, int palpite){
    if (palpite < numeroAleatorio){
        cout << "Seu palpite foi muito baixo!\n";
    }
    else if (palpite > numeroAleatorio){
        cout << "Seu palpite foi muito alto!\n";
    }
}


void telaVencedor(){
    cout << "------------------------\n";
    cout << "Parabéns! Você venceu! 🎉\n";
    cout << "------------------------\n";
}
void exibirResultado(int tentativas, int numeroAleatorio){
    cout << "------------------------\n";
    cout << "Você acertou o número " << numeroAleatorio << " em " << tentativas << " tentativas!\n";
    cout << "------------------------\n";
    telaVencedor();
}
void telaFinal(){
    cout << "------------------------\n";
    cout << "Obrigado por jogar!\n";
    cout << "------------------------\n";
}

void telaPerdedor(){
    cout << "------------------------\n";
    cout << "Você perdeu! Tente novamente! 😢\n";
    cout << "------------------------\n";
}

void jogarJogo(int numTentativas, int numeroAleatorio, int palpite,bool estado_jogador){
    for (int i = 0; i < numTentativas; i++){
        cout << "Insira seu palpite: ";
        cin >> palpite;
        if (palpite == numeroAleatorio){
            exibirResultado(i+1, numeroAleatorio);
            estado_jogador = true;
            break;
        }
        else{
            exibirDica(numeroAleatorio, palpite);
        }
    }
    if (!estado_jogador){
        telaPerdedor();
        cout << "O número era: " << numeroAleatorio << "\n";
    }
    telaFinal();
    cout << "------------------------\n";
}

int main(){
    int numTentativas;
    int numeroAleatorio;
    int palpite;
    bool vitoria = false;
    telaInicial();
    entradaDados(numTentativas, numeroAleatorio);
    telaCarregamento(3);
    jogarJogo(numTentativas, numeroAleatorio, palpite, vitoria);
    return 0;
}