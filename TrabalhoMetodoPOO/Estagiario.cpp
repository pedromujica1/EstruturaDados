#include <iostream>
#include <string>
using namespace std;

class Estagiario{
public:
    //Atributos Classes Bases
    string nome;
    string email;
    string setor;
    string instituicao_ensino;
    int horasContratoSemanais;
    int problemasResolvidos;
    int problemasCriados;
    int qntdFaltas;
    float salario;

    Estagiario(string n, string mail,string set, string inst_ensino, int hSemanais, int pResolvidos, int pCriados, int faltas, float s): nome(n), email(mail),setor(set), instituicao_ensino(inst_ensino),horasContratoSemanais(hSemanais), problemasResolvidos(pResolvidos), problemasCriados(pCriados),qntdFaltas(faltas) , salario(s){
    }
    void setNome(string n){nome = n;}
    void setEmail(string mail){email = mail;}
    void setSetor(string set){setor = set;}
    void setInstituicaoEnsino(string inst_ensino){instituicao_ensino = inst_ensino;}
    
    //void setHorasContrato(int hContrato){horasContrato = hContrato;}
    
    void setQntdFaltas(int qFaltas){qntdFaltas = qFaltas;}
    void setProblemasResolvidos(int pResolvidos){problemasResolvidos = pResolvidos;}
    void setProblemasCriados(int pCriados){problemasCriados = pCriados;}
    void setSalario(float s){salario = s;}

    string getNome(){return nome;}
    string getEmail(){return email;}
    string getSetor(){return setor;}
    string getInstituicaoEnsino(){return instituicao_ensino;}
    //CONSTANTE DEFAULT PARA A CLASSE BASE 
    virtual int getHorasContratoSemanais() const {
        return 30;
    }
    
    int getQntdFaltas(){return qntdFaltas;}
    int getProblemasResolvidos(){return problemasResolvidos;}
    int getProblemasCriados(){return problemasCriados;}
    float getSalario(){return salario;}

    //Metódos gerais
    
    void exibirRelatorio(){
        cout << endl;
        cout << "-------RELATORIO ESTAGIARIO---------"  << endl;
        cout << "Nome: " << getNome() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Setor: " << getSetor() << endl;
        cout << "Instituição de Ensino: " << getInstituicaoEnsino() << endl;
        cout << "Horas de contrato semanais: " << getHorasContratoSemanais() << endl;
        cout << "Quantidade de faltas: " << getQntdFaltas() << endl;
        cout << "Problemas resolvidos: " << getProblemasResolvidos() << endl;
        cout << "Problemas criados: " << getProblemasCriados() << endl;
        cout << "Salário: R$" << getSalario() << endl;
        cout << "--------------------------"<< endl;
        cout << endl;

    }

    void registrarFalta() {
        qntdFaltas++;
        cout << "Falta registrada para " << nome << ". Total: " << qntdFaltas << endl;
    }

    void resolverProblema() {
        problemasResolvidos++;
        salario += 20; //Aumento de R$100 por problema resolvido
        cout << nome << " resolveu um problema. Novo salário: " << salario << endl;
    }
    void criarProblema() {
        problemasCriados++;
        salario -= 20; 
        cout << nome << " criou um problema. Novo salário: " << salario << endl;
    }



};
class EstagiarioNivelMedio : public Estagiario{
    public:
    //Atributos Exclusivos
    bool menorIdade;
    string responsavel;
    int horasContratoSemanais = 20;
    
    //Herança
    // Estagiario(string n, string mail,string set, string inst_ensino, int pResolvidos, int pCriados, int faltas, float s): nome(n), email(mail),setor(set), instituicao_ensino(inst_ensino), problemasResolvidos(pResolvidos), problemasCriados(pCriados),qntdFaltas(faltas) , salario(s){
    EstagiarioNivelMedio(string n, string mail,string setor, string inst_ensino,int hSemanais, int hContrato, int pResolvidos, int pCriados, int faltas, float s, bool menorIdade, string responsavel): Estagiario(n, mail,setor, inst_ensino,hSemanais, pResolvidos, pCriados, faltas, s), menorIdade(menorIdade), responsavel(responsavel){
            cout << "--------------------------"<< endl;
            cout << "Estagiário de nível Médio " << nome << " entrou no setor " << setor << endl;
            cout << "--------------------------"<< endl;
        }
    ~EstagiarioNivelMedio(){
        cout << "--------------------------"<< endl;
        cout << "Estagiário " << nome << " saiu do setor " << setor << endl;
        cout << "--------------------------"<< endl;
    }
    //Sobrescrevendo 
    int getHorasContratoSemanais() const override {
        return horasContratoSemanais;
    }
    void setMenorIdade(bool menorI){menorIdade = menorI;}
    void setResponsavel(string resp){responsavel = resp;}
    bool getMenorIdade(){return menorIdade;}
    string getResponsavel(){return responsavel;}
    //void setHorasContrato(int hContrato){horasContratoSemanais = hContrato;}
};

class EstagiarioNivelSuperior : public Estagiario{
    public:
    //Atributos Exclusivos
    int horasComplementares;
    bool estagioCurricular;
    
    //Herança
    EstagiarioNivelSuperior(string n, string mail,string setor, string inst_ensino, int hSemanais, int pResolvidos, int pCriados, int faltas, float s, int hComplementares, bool estagioC): Estagiario(n, mail,setor, inst_ensino,hSemanais, pResolvidos, pCriados, faltas, s), horasComplementares(hComplementares), estagioCurricular(estagioC){
            cout << "--------------------------"<< endl;
            cout << "Estagiário de Nível superior " << nome << " entrou no setor " << setor << endl;
            cout << "--------------------------"<< endl;
        }
    ~EstagiarioNivelSuperior(){
        cout << "--------------------------"<< endl;
        cout << "Estagiário " << nome << " saiu do setor " << setor << endl;
        cout << "--------------------------"<< endl;
    }
    void setHorasComplementares(int horasComp){horasComplementares = horasComp;}
    void setEstagioCurricular(bool estagioC){estagioCurricular = estagioC;}
    int getHorasComplementares(){return horasComplementares;}
    bool getEstagioCurricular(){return estagioCurricular;}

    void adicionarHorasComplementares(int horas) {
        horasComplementares += horas;
        cout << horas << " horas complementares adicionadas. Total: " << horasComplementares << endl;
    }

};

int main() {
  
    EstagiarioNivelMedio est1("Rogério Sazon", "rogerio.sazon@ifpr.com", "Auditórios", "IFPR - Campus Cvel",20, 20, 5, 1, 0, 800.0, true, "Josué Castro");
    est1.exibirRelatorio();    
    est1.resolverProblema();
    est1.exibirRelatorio();

    EstagiarioNivelSuperior est2("Bilbo Baggins", "bilbo.baggins@middleearth.com", "Engenharia", "USP", 30, 15, 0, 0, 1800.0, 30, true);
    est2.exibirRelatorio();
    est2.adicionarHorasComplementares(10);
    est2.resolverProblema();              
    est2.criarProblema();                 
    est2.exibirRelatorio();

    return 0;
}
