#include <iostream>
#include <cmath>  
using namespace std;

double area(double raio) {
    return M_PI * raio * raio;
}

double area(double base, double altura) {
    return base * altura;
}

double area(double base, double altura, char tipo) {
    if (tipo == 't')
        return (base * altura) / 2;
    return -1; // valor inválido
}

int main() {
    cout << "Área do círculo (raio 3): " << area(3.0) << endl;
    cout << "Área do retângulo (4 x 5): " << area(4.0, 5.0) << endl;
    cout << "Área do triângulo (4 x 5): " << area(4.0, 5.0, 't') << endl;
    return 0;
}