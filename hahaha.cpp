#include <iostream>
#include <cctype>

using namespace std;

void receba_variaveis(int* num1, int *num2){

    int change = *num1;
    *num1 = *num2;
    *num2 = change;
}
int main(){

    int var1 = 0, var2 = 0;

    cout <<"\nEnter the values: \n";
    cin >> var1 >> var2;

    receba_variaveis(&var1, &var2);

    cout <<"\nThe values";
    cout <<"\n num1: " << var1 << "\n num2: " << var2;

    return 0;
}