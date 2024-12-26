#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void limpaTela(){
    system("CLS"); //LIMPA A TELA
}
bool Maior(int a, int b){

    cout <<"\nDigite a e b: \n";
    cin >> a >> b;

    limpaTela();

    if (a < b)
        return true;
    return false;
}

int main(){
    int a = 0, b = 0;

    cout << Maior(a, b);

    return 0;
}