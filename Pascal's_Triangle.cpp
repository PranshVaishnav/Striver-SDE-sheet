#include <bits/stdc++.h> 
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> ans;
    vector<long long int>start={1};   
    ans.push_back(start);
    for(int i=1;i<n;i++)
    {
        vector<long long int>a;
        vector<long long int>prev=ans[i-1];
        a.push_back(1);
        for(int k=0;k<prev.size()-1;k++)
        {
          a.push_back(prev[k]+prev[k+1]);
         }
         a.push_back(1);   
        ans.push_back(a);
    }
    
    return ans;
    
}
