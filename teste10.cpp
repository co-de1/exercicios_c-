#include <iostream>
#include <cstring>
#include <algorithm>

bool anagramas(std:: string&str1, std:: string&str2){
    std:: cout<<"Enter the words: \n";
    std:: cin >> str1 >> str2;

    if (str1.size() != str2.size())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main(){

    std::string str1;
    std::string str2;

    if (anagramas(str1, str2))
        printf("\nSao anagramas");
    else
        printf("\nNao sao anagramas");
    

    return 0;
}