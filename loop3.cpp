#include <iostream>
#include <cstdlib> //Nova biblioteca
#include <ctime> //Nova biblioteca


/*
Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
saída o numero de cada dado e a relação entre eles (>,<,=) de cada lançamento.

Make a program that simulate two dices play, d1 and d2, n times, have as output the number
of each one, and the relation between them (>,<,=) in each play.
*/

using namespace std;

int main (){

    int numTimes = 0, dice1 = 0, dice2 = 0;
    char relation;

    cout <<"\nEnter the times you want to play the dices: ";
    cin >> numTimes;

    srand(time(0)); //Gerar aleatorios

    for (int i = 1; i <= numTimes; ++i)
    {
        dice1 = rand() % 6 + 1; //O operador % restringe o intervalo de numbers gerados.
        dice2 = rand() % 6 + 1;

        if (dice1 > dice2)
        {
            relation = '>';
        } else if (dice1 < dice2)
        {
            relation = '<';
        }
        else
        {
            relation = '=';
        }

    cout <<"\nDice one: " << dice1 << " Dice two: " << dice2 <<"\nRelation " << dice1 << " " << relation << " " << dice2 << endl;
    }

    return 0;
}