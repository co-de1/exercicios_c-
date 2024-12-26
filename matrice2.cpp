#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    int maxNum = 5;

    float A[maxNum][maxNum];

    srand(time(0));

    for (size_t i = 0; i < maxNum; ++i)
    {
        for (size_t j = 0; j < maxNum; ++j)
        {
            A[i][j] = rand() % 99 + 0;
        }
    }

    for (size_t i = 0; i < maxNum; ++i)
    {
        for (size_t j = 0; j < maxNum; ++j)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }
    

    return 0;
}