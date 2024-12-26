#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a = 10;
    int *point;
    int &b = a;

    point = &a;

    cout <<"\nValor = " << a;
    cout <<"\nTamanho = " << sizeof(a);
    cout <<"\nEndereco memory = " << &a << endl;

    cout <<"\nValor = " << *point;
    cout <<"\nTamanho = " << sizeof(point);
    cout <<"\nEndereco memory = " << &point << endl;

    *point = 20;

    cout <<"\nValor = " << *point;

    return 0;
}