#include <iostream>
#include <bits/stdc++.h>
//#include <set>
//#include <vector>

using namespace std;

int main (){

   int elements = 0;
   set <int> uniao;

   cout <<"\nEnter the quantity of the elements: ";
   cin >> elements;

   int vet1[elements];
   int vet2[elements];

   cout <<"\nElement of the first vetor: \n";
   for (int i = 0; i < elements; ++i){
      cin >> vet1[i];
      uniao.insert(vet1[i]);
   }

   cout <<"\nElement of the second vetor: \n";
   for (int i = 0; i < elements; ++i){
      cin >> vet2[i];
      uniao.insert(vet1[i]);
   }
   

   cout <<"\nThe elements: \n";
   for (int vetResult : uniao){
      cout << vetResult << " " << endl;
   }

   cout <<endl;

   return 0;
}