#include <iostream>
#include <string>
using namespace std;

class Estagiario{
public:
    string nome;
    string email;
    string setor;
    string instituicao_ensino;
    const int horasContrato;
    int horasCumpridasDiarias;
    int horasCumpridasSemanais;
    int qntdFaltas;
    int problemasResolvidos;
    int problemasCriados;
    int totalEstagiarios;
    float salario;


    Estagiario(string n, string mail,string set, string inst_ensino, int hContrato, int hCumpridasDiarias, int hCumpridasSemanais, int pResolvidos, int pCriados, int tEstagiarios, float s): nome(n), email(mail),setor(set), instituicao_ensino(inst_ensino), horasContrato(hContrato), horasCumpridasDiarias(hCumpridasDiarias), horasCumpridasSemanais(hCumpridasSemanais), problemasResolvidos(pResolvidos), problemasCriados(pCriados), totalEstagiarios(tEstagiarios), salario(s){
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
    void setInstituicaoEnsino(string inst_ensino){instituicao_ensino = inst_ensino;}
    void setHorasCumpridas(int hCumpridas){horasCumpridas = hCumpridas;}
    void setQntdFaltas(int qFaltas){qntdFaltas = qFaltas;}
    void setProblemasResolvidos(int pResolvidos){problemasResolvidos = pResolvidos;}

    string getNome(){return nome;}
    string getEmail(){return email;}
    string getSetor(){return setor;}
    string getInstituicaoEnsino(){return instituicao_ensino;}
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
    const int horasCumpridas = 8;

    EstagiarioNivelMedio(string n, string mail,string set, string inst_ensino, int hContrato, int hCumpridas, int pResolvidos, int pCriados, int tEstagiarios, float s) : Estagiario(n, mail, set, inst_ensino, hContrato, hCumpridas, pResolvidos, pCriados, tEstagiarios, s) , 

    
};


