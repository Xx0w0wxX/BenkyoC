#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<vector<int>> matrix = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    for(auto& row: matrix)
    {
        for(auto& col : row)
        {
            cout << col << "\n";
        }
    }

    cout << "---------" << "\n";

    for(int i = 0; i < matrix.size(); i++)
        for(int j = 0; j < matrix[0].size(); j++)
            cout << matrix[i][j] << " \n"[j == matrix.size()];

    return 0;
}