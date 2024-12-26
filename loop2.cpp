#include <iostream>
#include <cstddef>
#include <bits/stdc++.h>

int main(){

    int numTerms = 0, sum1 = 0, sum2 = 0, sumTot = 0, i = 1, temp;

    std:: cout <<"\nEnter the number of terms: ";
    std:: cin >> numTerms;

    while (i <= numTerms){
        if (i % 2 == 0){
            temp = -i;
            sum2 += temp;
            std:: cout <<"\n" << temp;
        }
        else {
            sum1 += i;
            std:: cout <<"\n" << i;
        }
        ++i;
    }

    sumTot = sum1 + sum2;
    std:: cout <<"\nThe sum is: " << sumTot << std:: endl;

    return 0;
}