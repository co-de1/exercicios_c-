#include <iostream>
#include <vector>

std::vector<int> somaVetores(const std::vector<int>& vetor1, const std::vector<int>& vetor2) {
    std::vector<int> resultado;

    // Verifica se os vetores têm o mesmo tamanho
    if (vetor1.size() != vetor2.size()) {
        std::cerr << "Os vetores precisam ter o mesmo tamanho." << std::endl;
        return resultado; // Retorna um vetor vazio em caso de erro
    }

    // Soma os elementos correspondentes dos vetores
    for (size_t i = 0; i < vetor1.size(); ++i) {
        resultado.push_back(vetor1[i] + vetor2[i]);
    }

    return resultado;
}

int main() {
    std::vector<int> v1 = {1, 2, 3, 4};
    std::vector<int> v2 = {5, 6, 7, 8};

    std::vector<int> resultado = somaVetores(v1, v2);

    std::cout << "Resultado da soma dos vetores: ";
    for (int valor : resultado) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
