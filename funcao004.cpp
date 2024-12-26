#include <iostream>
#include <string>

/*void tamanho_string(std::string& str, int& strsize){

    //Usar referencias
    std:: cout <<"\nEnter a string: ";
    std::getline(std::cin, str);

    strsize = str.size();

    std:: cout <<"The size is: " << strsize;
}

int main(){

    std:: string str;
    int strsize;
    
    tamanho_string(str, strsize);

    return 0;
}*/

void limpar(){

    std::cin.ignore(INT_MAX, '\n');
}

void iguais(std::string str1, std::string str2){

    std::cout <<"\nEnter two strings: \n";
    std:: getline(std::cin, str1);
    //limpar();
    std:: getline(std::cin, str2);

    if (str1.size() == str2.size())
        std::cout <<"\nThe strings are equals!";
    else
        std::cout <<"\nThe strings are not equals";
}

int main(){

    std::string str1;
    std::string str2;

    iguais(str1, str2);

    return 0;
}