/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

template <typename T>

void print (T x){
    cout << x <<endl;
}
struct Alunos{
    int idAluno;
    char nome[50];
    float nota;
};

struct Arvore{
    int key;
    Arvore *esquerda;
    Arvore *direita;
}

int main()
{
    int num = 28;
    print(num);
    
    char fase15[80] = "O bom, o mau e o faminto";
    print(fase15);
    
    
    //Ponteiros 
    int x = 10;
    int *p = &x;
    print(p);
    print(x);
    //Pilha
    int pilha[100];
    int topo = -1;
    int valor;
    
    pilha[++topo] =10;
    pilha[++topo] =20;
    pilha[++topo] =30;
    print(pilha[topo]);
    valor = pilha[--topo];
    print(valor);
    
    std::cout<<"Hello World";
    //Grafo
    int grafo[2][2]={}
    return 0;
}

/* Inteiro 4 bytes
short 2 bytes
*/
