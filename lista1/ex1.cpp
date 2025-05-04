#include <iostream>
using namespace std;

float entradaDados(){
    float celsius;
    cout << "Insira a temperatura a ser convertida: ";
    cin >> celsius;
    return celsius;
}

float ConverterTemp(float temperatura){
    float fahrenheit;
    fahrenheit = (temperatura * 9/5) + 32;
    return fahrenheit;
}

void imprimirTexto(float temp_celsius,float temp_fahrenheit){

    if (temp_celsius < 0){
        cout << "Condições frias!\n";
    }
    else{
        cout << "Condições normais de temperatura\n";
    }
    cout << "\nTemperatura em Fahrenheit: " << temp_fahrenheit << "\n";
}

int main(){
    float temp_celsius = entradaDados();
    float temp_fahrenheit = ConverterTemp(temp_celsius);
    imprimirTexto(temp_celsius, temp_fahrenheit);
    return 0;
}