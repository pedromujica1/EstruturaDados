#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int maior(int num1, int num2){
    return std::max({num1,num2});
}

int main() {
    int num1, num2, num3;
    cout << "Insira o primeiro número: ";
    cin >> num1;
    cout << "Insira o segundo número: ";
    cin >> num2;
    int maior_num = maior(num1,num2);
    cout << "O maior número entre " << num1 << " e " << num2 << " é: " << maior_num << endl;

}