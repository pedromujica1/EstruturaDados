#include <iostream>

using namespace std;

class Resturante{
public:
    string Nome;
    string endereco;
    float nota;
    int capacidade;
    int telefone[15];
    string email;
private:
    int cnpj[14];
    double lucro_liquido;
    double lucro_bruto;
    double despesas;

    void cozinhar();
    void servir();
    void cobrar();
    void gerar_pedido();
    void receber();
    void estoque();

};

int main(){
    return 0;
}