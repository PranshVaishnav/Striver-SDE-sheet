#include <bits/stdc++.h> 
#include <vector>
using namespace std;

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    int row=-1;
    for(int i=0;i<mat.size();i++)
    {
        if(mat[i][0]<=target)
        {
            row=i;
        }
        else{
            break;
        }
    }
    if(row==-1)
    {
        return false;
    }
    int flag=0;
    for(int i=0;i<mat[row].size();i++)
    {
        if(mat[row][i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        return true;
    }
    
        return false;
}