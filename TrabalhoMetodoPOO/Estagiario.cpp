#include <iostream>
#include <string>
using namespace std;

class Estagiario{
public:
    string nome;
    string email;
    string setor;
    string universidade;
    const int horasContrato;
    int horasCumpridas;
    int qntdFaltas;
    int problemasResolvidos;
    int problemasCriados;
    int totalEstagiarios;
    float salario;


    Estagiario(string n, string mail,string set, string uni, int hContrato, int hCumpridas, int pResolvidos, int pCriados, int tEstagiarios, float s): nome(n), email(mail),setor(set), universidade(uni), horasContrato(hContrato), horasCumpridas(hCumpridas), problemasResolvidos(pResolvidos), problemasCriados(pCriados), totalEstagiarios(tEstagiarios), salario(s){
        totalEstagiarios++;
        cout << "Estagiário " << nome << "entrou no setor" << setor << endl;
        
    }
    virtual ~Estagiario(){
        totalEstagiarios--;
        cout << "Estagiário " << nome << "saiu do setor" << setor << endl;
    }
    void setNome(string n){nome = n;}
    void setEmail(string mail){email = mail;}
    void setSetor(string set){setor = set;}
    void setUniversidade(string uni){universidade = uni;}
    void setHorasCumpridas(int hCumpridas){horasCumpridas = hCumpridas;}
    void setQntdFaltas(int qFaltas){qntdFaltas = qFaltas;}
    void setProblemasResolvidos(int pResolvidos){problemasResolvidos = pResolvidos;}

    string getNome(){return nome;}
    string getEmail(){return email;}
    string getSetor(){return setor;}
    string getUniversidade(){return universidade;}
    int getHorasContrato(){return horasContrato;}
    int getHorasCumpridas(){return horasCumpridas;}
    int getQntdFaltas(){return qntdFaltas;}
    int getProblemasResolvidos(){return problemasResolvidos;}
    int getProblemasCriados(){return problemasCriados;}
    int getTotalEstagiarios(){return totalEstagiarios;}
    float getSalario(){return salario;}

    void trabalhar(int horas){
       
    }
       
};
class EstagiarioNivelMedio : public Estagiario {
public:
    EstagiarioNivelMedio(string n, string mail,string set, string uni, int hContrato, int hCumpridas, int pResolvidos, int pCriados, int tEstagiarios, float s) : Estagiario(n, email(mail),setor(set), universidade(uni), horasContrato(hContrato), horasCumpridas(hCumpridas), problemasResolvidos(pResolvidos), problemasCriados(pCriados), totalEstagiarios(tEstagiarios), salario(s) {}

    
};
int main(){

}
