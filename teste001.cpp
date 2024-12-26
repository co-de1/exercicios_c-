#include <iostream>
#include <vector>
#include<ctime>
#include<cstdlib>

//using namespace std;

int main(){

    int rows = 0;

    std::cout <<"\nEnter the matrice size: ";
    std::cin >> rows;

    std::vector<std::vector<int>> Mat(rows, std::vector<int>(rows));

    std::srand(std::time(0));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            Mat[i][j] = rand() % 3 - 1; //O operador % restringe o intervalo de numbers gerados.
        } 
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            std::cout<<Mat[i][j] << "   ";
        }
        std::cout<<"\n";
    }
    return 0;
}