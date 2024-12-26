#include <iostream>

using namespace std;

void comparar(int var1 = 0, int var2 = 0){

    //int var1 = 0, var2 = 0;

    if (&var1 > &var2)
        cout <<"\nThe greatest addres is var1: " << &var1;
    else
        cout <<"\nThe greatest addres is var2: " << &var2;
}

int main(){

    comparar();

    return 0;
}



    /* 
    DATA TYPES
    OS TIPOS DE DADOS EM C, SÃO OS MESMOS AQUI
    SÓ HÁ DIFERENÇA NO DADOS DO TIPO STRING
    EM C++, PARA STRING COM MAIS DE 1 CARACTER USA-SE <STRING (value)>
    E AS DO TIPO LÓGICO SÃO <BOOL (value)> 

    #include <bits/stdc++.h> --> biblioteca

    cin.ignore(INT_MAX, '\n'); LIMPEZA DO BUFFER
    getline (cin, nome); <TEXTO>
    */