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
    
    
    std::cout<<"Hello World";

    return 0;
}

/* Inteiro 4 bytes
short 2 bytes
*/
