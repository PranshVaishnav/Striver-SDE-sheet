#include <bits/stdc++.h> 
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    // Write your code here.
    vector<vector<long long int>> ans;
    for(int i=0;i<n;i++)
    {
        vector<long long int>a(i+1,1);
        for(int k=1;k<i;k++)
        {
          a[k]=ans[i-1][k-1]+ans[i-1][k];
         }  
        ans.push_back(a);
    }
    
    return ans;
    
}
