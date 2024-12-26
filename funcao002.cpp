#include <iostream>
#include <string>

void achar_substring(){

    std::string texto = "I love to study Cpp!";
    std::string sub_texto = "Cpp";

    size_t pos = texto.find(sub_texto);

    if (pos != std::string::npos)
        std::cout <<"\nA substring " << sub_texto << " foi encontrada na posicao " << pos;
    else
        std::cout <<"\nNao foi encontrada!";
    
}

int main(){

    achar_substring();

    return 0;
}