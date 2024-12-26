#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream lendo_arquivo; //funcao para escrever arquivos

    // abrir <funcao.open/close> // std::ios_base

    lendo_arquivo.open("texto.txt", std::ios_base::app);

    lendo_arquivo <<"do eiusmod tempor incididunt ut labore et dolore magna aliqua";

    lendo_arquivo.close();

    return 0;

}