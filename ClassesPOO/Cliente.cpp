#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>
using namespace std;

class Cliente{
public:
    int id_cliente;
    string nome;
    string cpf;
    string telefone;
    
    //Getters
    string getNome() { return nome; }
    string getCpf() { return cpf; }
    string getTelefone() { return telefone; }
    int getIdCliente() { return id_cliente; }

    //Setters
    void setNome(string name) { nome = name; }
    void setCpf(string cpf_cliente) { cpf = cpf_cliente; }
    void setTelefone(string phone) { telefone = phone; }
    void setIdCliente(int id) { id_cliente = id; }
    void exibirDados(){
        cout << "ID: " << id_cliente << endl;
        cout << "Nome: " << nome << endl;
        cout << "CPF: " << cpf << endl;
        cout << "Telefone: " << telefone << endl;
        cout << endl;
    }
    void atualizarTelefone(string novo_telefone){
        cout << "Atualizando telefone..." << endl;
        sleep(4);
        setTelefone(novo_telefone);
        cout << "Telefone atualizado para: " << novo_telefone << endl;
    }
};

int main() {
    Cliente cliente1;
    cliente1.setIdCliente(1);
    cliente1.setNome("Alexandre Augusto");
    cliente1.setCpf("123.456.789-00");
    cliente1.setTelefone("98765-4321");

    cliente1.exibirDados();

    string novo_telefone;
    cout << "Digite o novo telefone: ";
    cin >> novo_telefone;
    cliente1.atualizarTelefone(novo_telefone);
    cout << endl;
    cout << "Dados atualizados:" << endl;
    cliente1.exibirDados();

    return 0;
}