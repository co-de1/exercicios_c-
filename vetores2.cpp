#include <iostream>
#include <vector>

using namespace std;

int main(){

    int rows = 0, columns = 0, gGrade = 0, idNumber = 0, avg = 0;

    cout <<"\nEnter the rows: ";
    cin >> rows;
    cout <<"\nEnter the columns: ";
    cin >> columns;

    vector<vector<int>> Mat(rows, vector<int>(columns));

    cout <<"\nEnter the datas: " << endl;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout <<"[" << i << "," << j <<"]: ";
            cin >> Mat[i][j];

            if (j > 2)
            {
                Mat[i][j] = (Mat[i][j - 2] + Mat[i][j - 1])/2;
            }
        }

        system("CLS");
    }

    Mat[0][3] = gGrade;

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            if (Mat[i][3] > gGrade)
            {
                gGrade = Mat[i][3];
                idNumber = Mat[i][0];
                avg += Mat[i][3];
            }
        }
    }

    cout <<"\nThe Id number: " << idNumber;
    cout <<"\nThe avg is: " << avg/5;

    return 0;
}