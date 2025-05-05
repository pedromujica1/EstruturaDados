#include <iostream>
using namespace std;

void soma(int a, int b){
    cout << "A soma de " << a << " + " << b << " = " << a + b << endl;
}
void subtracao(int a, int b){
    cout << "A subtração de " << a << " - " << b << " = " << a - b << endl;
}
void multiplicacao(int a, int b){
    cout << "A multiplicação de " << a << " * " << b << " = " << a * b << endl;
}
void divisao(int a, int b){
    if (b != 0)
        cout << "A divisão de " << a << " / " << b << " = " << a / b << endl;
    else
        cout << "Divisão por zero não é permitida." << endl;
}
void menu(){
    cout << "Escolha uma operação:\n";
    cout << "1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";
    cout << "5. Sair\n";
}
int main() {
    int opcao, a, b;
    do {
        menu();
        cout << "Digite sua opção: ";
        cin >> opcao;

        if (opcao >= 1 && opcao <= 4) {
            cout << "Digite dois números: ";
            cin >> a >> b;
        }

        switch (opcao) {
            case 1:
                soma(a, b);
                break;
            case 2:
                subtracao(a, b);
                break;
            case 3:
                multiplicacao(a, b);
                break;
            case 4:
                divisao(a, b);
                break;
            case 5:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    } while (opcao != 5);

    return 0;
}