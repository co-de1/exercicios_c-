#include <iostream>

using namespace std;

void triangulo_lateral(){

    int num = 0, base = 0;

    cout <<"\nEnter the height: ";
    cin >> num;

    base = 2*num - 1;

    for (int i = 1; i <= base; i++){
        if (i <= num){
            for (int j = 1; j <= i; j++)
                cout <<"*";
            cout <<endl;
        }
    }

    // Parte decrescente do triângulo
    for (int i = num - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
            cout << endl;
    }

}

int main(){

    triangulo_lateral();

    return 0;
}