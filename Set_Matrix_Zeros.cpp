/* Priyanshu Vaishnav */
#include <bits/stdc++.h>
using namespace std;

#define int long long

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.

    // checking rows with no zero entry
    int r_size = matrix.size();
    int c_size = matrix[0].size();
    set<int> row;
    set<int> column;

    for (int i = 0; i < r_size; i++)
    {
        int flag = 0;
        for (int j = 0; j < c_size; j++)
        {
            if (matrix[i][j] == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            row.insert(i);
        }
    }

    // checking columns with no zero entry
    for (int i = 0; i < c_size; i++)
    {
        int flag = 0;
        for (int j = 0; j < r_size; j++)
        {
            if (matrix[j][i] == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            column.insert(i);
        }
    }

    // pairing row,column
    set<pair<int, int>> block;
    for (auto i = row.begin(); i != row.end(); ++i)
        for (auto j = column.begin(); j != column.end(); ++j)
        {
            pair<int, int> s = make_pair(*i, *j);
            block.insert(s);
        }

    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            pair<int, int> key = make_pair(i, j);
            if (block.find(key) != block.end())
            {
                continue;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
}
