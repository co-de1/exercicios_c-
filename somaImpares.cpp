#include <iostream>
#include <bits/stdc++.h>
#include <limits>

using namespace std;

int main ()
{
   int num1, num2, change, sum, i;

   cout <<"\nDigite dois numeros: \n";
   cin >>num1>>num2;

   if (cin.fail())
   {
      cin.clear(); // ignorar erro
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //LIMPAR buffer

      cout <<"Dados invalidos"<<endl;
   }

   if (num1 > num2)
   {
      change = num1;
      num1 = num2;
      num2 = change;
   }

   for (i = num1 + 1; i <= num2 - 1; i++)
   {
      if (i % 2 != 0)
      {
         sum += i;
      }
   }
   cout <<"\nSOMA DOS IMPARES = "<<sum<<endl;

    return 0;
}