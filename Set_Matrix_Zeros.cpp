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


//******************************** Efficient Solution with O(1)Space Complexity From Leetcode  *******************


/*

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.

    // checking rows with no zero entry
    int R = matrix.size();
    int C = matrix[0].size();

   bool isCol = false;

  for (int i = 0; i < R; i++) {

      // Since first cell for both first row and first column is the same i.e. matrix[0][0]
      // We can use an additional variable for either the first row/column.
      // For this solution we are using an additional variable for the first column
      // and using matrix[0][0] for the first row.
      if (matrix[i][0] == 0) {
        isCol = true;
      }

      for (int j = 1; j < C; j++) {
        // If an element is zero, we set the first element of the corresponding row and column to 0
        if (matrix[i][j] == 0) {
          matrix[0][j] = 0;
          matrix[i][0] = 0;
        }
      }
    }

    // Iterate over the array once again and using the first row and first column, update the elements.
    for (int i = 1; i < R; i++) {
      for (int j = 1; j < C; j++) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }

    // See if the first row needs to be set to zero as well
    if (matrix[0][0] == 0) {
      for (int j = 0; j < C; j++) {
        matrix[0][j] = 0;
      }
    }

    // See if the first column needs to be set to zero as well
    if (isCol) {
      for (int i = 0; i < R; i++) {
        matrix[i][0] = 0;
      }
    }
        
 
}

*/
