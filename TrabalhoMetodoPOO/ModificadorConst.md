# 🧠 POO - Modificador const em C++

O modificador const é essencial em C++ para garantir segurança, clareza e intenção no código. Ele é usado para declarar que um valor não será modificado, o que ajuda a evitar erros, documentar intenções e otimizar o código pelo compilador.
## 🔧 1. const em Variáveis
### 📌 Sintaxe
```c++
const int x = 10;
```
Significa que x não pode ser alterado depois de sua atribuição inicial.

✅ Bom para:

- Evitar alterações acidentais.

- Melhorar a legibilidade do código.

## 🔧 2. const em Ponteiros

### 🧩 Tipos:
```c++
const int* ptr;   // ponteiro para inteiro constante (o valor não pode mudar)
int* const ptr;   // ponteiro constante para inteiro (o ponteiro não pode mudar)
const int* const ptr; // ponteiro constante para inteiro constante
```
### 💡 Exemplo:
```c++
int x = 5;
int y = 10;

const int* a = &x; // ok: *a não pode ser alterado
//*a = 7; // erro
a = &y; // ok

int* const b = &x; // b não pode apontar para outro lugar
*b = 8; // ok
//b = &y; // erro
```
## 🧱 3. const em Parâmetros de Função
### 📌 Por valor (simples):
```c++
void mostraNumero(const int n);
```
- Não pode ser alterado dentro da função.
- Útil como documentação (não tem impacto no desempenho).
### 📌 Por referência:
```c++
void imprime(const string& texto);
```
- Garante que texto não será modificado.
- Evita cópia desnecessária, ideal para objetos grandes.
## 🧰 4. const em Métodos de Classe
### 📌 Sintaxe:
```c++
class Pessoa {
private:
    string nome;

public:
    Pessoa(string n) : nome(n) {}

    string getNome() const {  // método constante
        return nome;
    }
};
```

### ✅ Significado:

- Esse método não pode alterar nenhum atributo da instância (exceto os marcados como mutable).

- Permite chamar o método mesmo quando o objeto é const.

### 💡 Exemplo:
```c++
void exibirNome(const Pessoa& p) {
    cout << p.getNome(); // só funciona se getNome() for const
}
```

## 🔒 5. Objetos const
```c++
const Pessoa p("João");
p.getNome(); // ok
//p.setNome("Maria"); // erro, método não é const
```
Um objeto const só pode chamar métodos const.
## 🎯 6. mutable: A exceção à regra
```c++
class Contador {
private:
    mutable int acessos;

public:
    Contador() : acessos(0) {}

    int get() const {
        acessos++; // permitido porque acessos é mutable
        return acessos;
    }
};
```

- mutable permite modificar atributos mesmo em métodos const.

- Útil para contadores, caches, logs etc.

### 🧪 Exemplo Completo para Apresentação
```c++
#include <iostream>
using namespace std;

class Produto {
private:
    string nome;
    double preco;
    mutable int acessos; // contado mesmo em métodos const

public:
    Produto(string n, double p) : nome(n), preco(p), acessos(0) {}

    string getNome() const {
        acessos++; // permitido por ser mutable
        return nome;
    }

    double getPreco() const {
        return preco;
    }

    void setPreco(double novoPreco) {
        preco = novoPreco;
    }

    void mostrarAcessos() const {
        cout << "Nome acessado " << acessos << " vezes." << endl;
    }
};

int main() {
    const Produto p("Notebook", 3499.99);

    cout << p.getNome() << endl; // ok
    cout << p.getPreco() << endl; // ok
    p.mostrarAcessos(); // mostra quantas vezes o nome foi acessado

    // p.setPreco(2999.99); // erro: objeto é const
}
```
## ✅ Boas práticas com const

- Use const sempre que possível: te protege de bugs!

- Marque métodos const corretamente.

- Use const em parâmetros por referência para evitar cópias e alterações.

- Evite remover const com const_cast sem necessidade.

## 📊 Tabela-resumo
| Uso                      | Significado                                  |
|--------------------------|-----------------------------------------------|
| `const int x`            | `x` é constante                               |
| `const int* p`           | O valor apontado por `p` é constante          |
| `int* const p`           | O ponteiro `p` é constante                    |
| `const int* const p`     | Ambos são constantes                          |
| `void func(const int&)`  | Parâmetro não será alterado                   |
| `Tipo metodo() const`    | Método não altera o estado do objeto          |
| `const Classe obj`       | O objeto não pode ser modificado              |
