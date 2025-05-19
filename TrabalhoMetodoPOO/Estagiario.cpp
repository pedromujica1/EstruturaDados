#include <iostream>
#include <string>
#include <unistd.h> // Para sleep
#include <cstdlib> // Para system("clear") ou system("cls")
using namespace std;

class Estagiario {
protected:
    string nome,email,setor,instituicao_ensino;
    int problemasResolvidos;
    int problemasCriados;
    int qntdFaltas;
    float salario;

public:
    Estagiario(string n, string mail, string set, string inst_ensino, int pResolvidos, int pCriados, int faltas, float s)
        : nome(n), email(mail), setor(set), instituicao_ensino(inst_ensino), problemasResolvidos(pResolvidos), problemasCriados(pCriados), qntdFaltas(faltas),salario(s) 
    {
        cout << "--------------------------\n";
        cout << "Estagiário " << nome << " entrou no setor " << setor << endl;
        cout << "--------------------------\n";
    }

    virtual ~Estagiario() {}

    virtual int getHorasContratoSemanais() const {
        return 30;
    }

    //Metódos gerais
    void exibirRelatorio() const {
        cout << "\n------- RELATÓRIO ESTAGIÁRIO ---------\n";
        cout << "Nome: " << nome << endl;
        cout << "Email: " << email << endl;
        cout << "Setor: " << setor << endl;
        cout << "Instituição de Ensino: " << instituicao_ensino << endl;
        cout << "Horas de contrato semanais: " << getHorasContratoSemanais() << endl;
        cout << "Quantidade de faltas: " << qntdFaltas << endl;
        cout << "Problemas resolvidos: " << problemasResolvidos << endl;
        cout << "Problemas criados: " << problemasCriados << endl;
        cout << "Salário: R$" << salario << endl;
        cout << "---------------------------------------\n";
    }

    void registrarFalta() {
        qntdFaltas++;
        cout << "Falta registrada para " << nome << ". Total: " << qntdFaltas << endl;
    }

    void resolverProblema() {
        problemasResolvidos++;
        salario += 100;
        cout << nome << " resolveu um problema. Novo salário: " << salario << endl;
    }

    void criarProblema() {
        problemasCriados++;
        salario -= 100;
        cout << nome << " criou um problema. Novo salário: " << salario << endl;
    }
};

class EstagiarioNivelMedio : public Estagiario {
private:
    const int horasContratoSemanais = 20; // Constante imutável conforme a lei
    bool menorIdade;
    string responsavel;

public:
    EstagiarioNivelMedio(string n, string mail, string setor, string inst_ensino,
                         int pResolvidos, int pCriados, int faltas, float s,
                         bool menorIdade, string responsavel)
        : Estagiario(n, mail, setor, inst_ensino, pResolvidos, pCriados, faltas, s),
          menorIdade(menorIdade), responsavel(responsavel)
    {
        cout << "--------------------------\n";
        cout << "Estagiário de Nível Médio " << nome << " entrou no setor " << setor << endl;
        cout << "--------------------------\n";
    }

    ~EstagiarioNivelMedio() override {
        cout << "--------------------------\n";
        cout << "Estagiário nível médio: " << nome << " saiu do setor " << setor << endl;
        cout << "--------------------------\n";
    }

    int getHorasContratoSemanais() const override {
        return horasContratoSemanais;
    }

    void setResponsavel(string resp) {
        responsavel = resp;
        cout << "Responsável atualizado para " << nome << ": " << responsavel << endl;
    }
    string getResponsavel() const { return responsavel; }
    bool getMenorIdade() const { return menorIdade; }
};

class EstagiarioNivelSuperior : public Estagiario {
private:
    int horasComplementares;
    bool estagioCurricular;

public:
    EstagiarioNivelSuperior(string n, string mail, string setor, string inst_ensino,int pResolvidos, int pCriados, int faltas, float s,int hComplementares, bool estagioC)
        : Estagiario(n, mail, setor, inst_ensino, pResolvidos, pCriados, faltas, s),
          horasComplementares(hComplementares), estagioCurricular(estagioC)
    {
        cout << "--------------------------\n";
        cout << "Estagiário de Nível Superior " << nome << " entrou no setor " << setor << endl;
        cout << "--------------------------\n";
    }

    ~EstagiarioNivelSuperior() override {
        cout << "--------------------------\n";
        cout << "Estagiário " << nome << " saiu do setor " << setor << endl;
        cout << "--------------------------\n";
    }

    void adicionarHorasComplementares(int horas) {
        horasComplementares += horas;
        cout << horas << " horas complementares adicionadas. Total: " << horasComplementares << endl;
    }

    int getHorasComplementares() const { return horasComplementares; }
    bool getEstagioCurricular() const { return estagioCurricular; }
};

void exemploExecucao() {
    EstagiarioNivelMedio est1("Frodo", "frodo@shire.com", "TI", "Colégio Shire",
                               5, 1, 0, 900.0, true, "Gandalf");

    est1.exibirRelatorio();
    cout << "---------Processando-------------" << endl;
    sleep(15);
    est1.resolverProblema();
    est1.exibirRelatorio();
    cout << "---------Processando-------------" << endl;
    sleep(15);

    EstagiarioNivelSuperior est2("Bilbo", "bilbo@shire.com", "Engenharia", "USP",
                                 15, 0, 0, 1800.0, 30, true);

    est2.exibirRelatorio();
    cout << "---------Processando-------------" << endl;
    sleep(15);
    est2.adicionarHorasComplementares(10);
    est2.resolverProblema();
    est2.criarProblema();
    cout << "---------Processando-------------" << endl;
    sleep(15);
    est2.exibirRelatorio();
    cout << "---------Processando-------------" << endl;
    sleep(15);
    cout << "Fim da execução! Obrigado por utilizar!!!" << endl;
}

Estagiario criarEstagiario() {
    string nome, email, setor, instituicao;
    int resolvidos, criados, faltas;
    float salario;
    cout << "\n------- CADASTRE SEU ESTAGIÁRIO ---------\n";
    cout << "Digite o nome: ";
    getline(cin, nome);
    cout << "Digite o email: ";
    getline(cin, email);
    cout << "Digite o setor: ";
    getline(cin, setor);
    cout << "Digite a instituição de ensino: ";
    getline(cin, instituicao);
    cout << "Quantidade de problemas resolvidos: ";
    cin >> resolvidos;
    cout << "Quantidade de problemas criados: ";
    cin >> criados;
    cout << "Quantidade de faltas: ";
    cin >> faltas;
    cout << "Salário: ";
    cin >> salario;
    cin.ignore(); //Limpa o buffer

    //Retorna o objeto
    return Estagiario(nome, email, setor, instituicao, resolvidos, criados, faltas, salario);
    
}

int main() {
    Estagiario est = criarEstagiario();
    est.exibirRelatorio();
    cout << "---------Processando-------------" << endl;
    sleep(15);
    exemploExecucao();
    return 0;
}
