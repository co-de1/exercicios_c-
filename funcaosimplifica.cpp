#include <iostream>
#include <cmath>

using namespace std;

// Função para calcular o MDC (Máximo Divisor Comum) usando o Algoritmo de Euclides
int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int simplifica(int numerador = 0, int denominador = 0){

    cout <<"\nInforme o numerador: ";
    cin >> numerador;
    cout <<"\nInforme o denominador: ";
    cin >> denominador;

    // Calcula o MDC entre o numerador e o denominador
    int divisor_comum = mdc(numerador, denominador);

    // Simplifica a fração
    numerador /= divisor_comum;
    denominador /= divisor_comum;


    cout <<"\nResultado = " << numerador << "/" << denominador;
}

int main(){

    simplifica();

    return 0;
}