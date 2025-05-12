#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>
using namespace std;

class ContaBancaria{
public:
    int numero_conta;
    string titular_conta;
    float saldo;

    //Getters
    int getNumeroConta() { return numero_conta; }
    string getTitularConta() { return titular_conta; }
    float getSaldo() { return saldo; }

    //Setters
    void setNumeroConta(int numero) { numero_conta = numero; }
    void setTitularConta(string titular) { titular_conta = titular; }
    void setSaldo(float valor) { saldo = valor; }

    void exibirExtrato(){
        cout << "Número da conta: " << numero_conta << endl;
        cout << "Titular da conta: " << titular_conta << endl;
        cout << "Saldo: R$.2f" << saldo << endl;
        cout << endl;
    }
    void depositar(float valor){
        cout << "Depositando R$" << valor << " na conta..." << endl;
        sleep(4);
        setSaldo(saldo += valor);
        cout << "Depósito realizado com sucesso!" << endl;
        exibirExtrato();
    }
    void sacar(float valor){
        if (valor > saldo){
            cout << "Saldo insuficiente para saque!" << endl;
            return;
        }
        cout << "Sacando R$" << valor << " da conta..." << endl;
        sleep(4);
        setSaldo(saldo -= valor);
        cout << "Saque realizado com sucesso!" << endl;
        exibirExtrato();
    }

};

int main(){
    ContaBancaria conta1;
    conta1.setNumeroConta(123456);
    conta1.setTitularConta("Pedro Miotto Mujica");
    conta1.setSaldo(1000.00);

    conta1.exibirExtrato();

    float valor_deposito;
    cout << "Digite o valor a ser depositado: ";
    cin >> valor_deposito;
    conta1.depositar(valor_deposito);
    cout << endl;

    float valor_saque;
    cout << "Digite o valor a ser sacado: ";
    cin >> valor_saque;
    conta1.sacar(valor_saque);
    cout << endl;

    conta1.exibirExtrato();
    cout << "Obrigado por utilizar nosso sistema bancário!" << endl;
    cout << "Até logo!" << endl;
    cout << endl;
    cout << "Sistema encerrado." << endl;
    return 0;
}