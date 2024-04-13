#include <bits/stdc++.h>
using namespace std;

void lowerTriangularMatrix(vector<vector<int>> &mat)
{
    int col = mat[0].size();
    int x = 1; // continue while x does not reach col
    for (int i = 0; i < mat.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (count != x)
            {
                count++; // forgived the current element
            }
            else
            {
                mat[i][j] = 0;
            }
        }
        x++;
        if (x == col)
            break;
    }
}
int main()
{
    vector<vector<int>> mat = {{1, 2, 3},
                               {5, 6, 7},
                               {9, 8, 7},
                               {5, 4, 3}};

    lowerTriangularMatrix(mat);
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}