#include <vector>
#include <iostream>
#include <string>
//#include <bits/stdc++.h>

using namespace std;

struct agenda{
    string nome;
    string email;
    int celular;
};

void ignorar(){

    cin.ignore(INT_MAX, '\n');
}

int main(){

    int n {};
    cout <<"\nEnter the size: ";
    cin >> n;

    agenda *var = new agenda[n];

    cout <<"\nEnter the datas: " << endl;

    for (size_t i = 0; i < n; i++)
    {
        cout <<"\nNome: ";
        cin >> var[i].nome;

        ignorar();

        cout <<"\nE-mail: ";
        getline(cin, var[i].email);
    }


    system("CLS");

    for (size_t i = 0; i < n; i++)
    {
        cout <<"\nNome: " << var[i].nome;
        cout <<"\nE-mail: " << var[i].email;
    }


    /*cout <<"\nEnter the name: ";
    cin >> var->nome;

    ignorar();

    cout <<"\nEnter the email: ";
    getline(cin, var->email);
    //cin >> var->email;

    cout <<"\nNome = " << var ->nome;
    cout <<"\nThe e-mail is: " << var->email;*/

    
    return 0;
}