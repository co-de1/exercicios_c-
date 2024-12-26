#include<iostream>
#include <algorithm>
#include <cstring>

bool sao_anagramas(const std::string& str1, const std::string& str2){

    if (str1.size() != str2.size()){
        return false;
    }

    // Cria cópias das strings para ordenar
    std::string s1 = str1;
    std::string s2 = str2;

    // Ordena as duas strings
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());

    // Compara as duas strings ordenadas
    return s1 == s2;
}

int main(){

    std:: string str1, str2;

    if (sao_anagramas(str1, str2)) {
        std::cout << "As palavras sao anagramas!" << std::endl;
    } else {
        std::cout << "As palavras nao sao anagramas!" << std::endl;
    }

    //std::cout <<"\nTamanho: " << str1.length();
    //funcao.size()

    return 0;
}