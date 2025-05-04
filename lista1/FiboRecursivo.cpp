#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Digite a posição n para calcular Fibonacci: ";
    cin >> n;
    cout << "------------------------\n";
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    cout << "------------------------\n";
    return 0;
}