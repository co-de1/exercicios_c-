#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){

    int numPoli1 = 0, numPoli2 = 0, test1 = 0, test2 = 0;
    int q = 0, rest = 0, numPoli = 0;

    srand(time(0));

    const int div = 1000;
    const int limit = 999;

    for (int i = 1; i <= limit; ++i)
    {
        numPoli1 = rand() % limit + 1;
        numPoli2 = rand() % limit + 1;

        numPoli = numPoli1 * numPoli2;

        q = numPoli / div;
        rest = numPoli % div;

        test1 = q + rest;
        test2 = rest + q;

        if (test1 == test2)
        {
            cout <<"\nThe number is a polindromo number: " << numPoli;
            cout <<"\n" << numPoli1 <<"\n" << numPoli2 << endl;
            break;
        }
    }

    return 0;
}