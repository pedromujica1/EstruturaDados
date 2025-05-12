#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <unistd.h>
using namespace std;

class Produto{
public:
    string nome;
    float preco;
    int qtdade_estoque;
    int id_produto;

    //Getters
    string getNome() { return nome; }
    float getPreco() { return preco; }
    int getIdProduto() { return id_produto; }


    
    void exibirDados(){
        cout << "ID: " << id_produto << endl;
        cout << "Nome: " << nome << endl;
        cout << "Preço: " << preco << endl;
        cout << "Quantidade em estoque: " << qtdade_estoque << endl;
        cout << endl;
    }

    void venderProdutro(Produto &nome){
        if (qtdade_estoque <= 0){
            cout << "Produto esgotado!" << endl;
            return;
        }

        cout << "Processando venda..." << endl;
        sleep(8);

        cout << "Produto vendido!" << endl;
        qtdade_estoque--;
        exibirDados();
        cout << endl;

    }
    void reporEstoque( int quantidade){
        cout << "Reabastecendo estoque..." << endl;
        cout << "Quantidade a ser reabastecida: " << quantidade << endl;
        sleep(8);
        cout << endl;
        cout << "-- Estoque reabastecido! --" << endl;
        qtdade_estoque += quantidade;
        exibirDados();
        cout << endl;
    }

    //Getters
    int getQtdadeEstoque() { return qtdade_estoque; }

    //Setters
    void setIdProduto(int id) { id_produto = id; }
    void setNome(string name) { nome = name; }
    void setPreco(float price) { preco = price; }
    void setQtdadeEstoque(int qtd) { qtdade_estoque = qtd; }

    
};

int main() {
    Produto produto1;
    Produto produto2;

    produto1.setIdProduto(1);
    produto1.setNome("ACTION FIGURE HOMEM DE FERRO IRON STUDIOS");
    produto1.setPreco(10.99);
    produto1.setQtdadeEstoque(100);

    produto2.setIdProduto(2);
    produto2.setNome("MEMÓRIA RAM 8GB DDR4");
    produto2.setPreco(20.99);
    produto2.setQtdadeEstoque(50);

    cout << "--- Dados do Produto 1 ---" << endl;
    produto1.exibirDados();
    
    cout << "--- Dados do Produto 2 ---" << endl;
    produto2.exibirDados();

    cout << "--- Vendendo Produto 1 ---" << endl;
    produto1.venderProdutro(produto1);
    cout << "--- Vendendo Produto 2 ---" << endl;
    produto2.venderProdutro(produto2);
    cout << "--- Repondo Estoque do Produto 1 ---" << endl;
    produto1.reporEstoque(5);

    return 0;
}