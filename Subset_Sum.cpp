#include<bits/stdc++.h>
using namespace std;

void func(int ind,vector<int>&num,vector<int>&ans,int sum)
{
   if(ind==num.size())
   {
     ans.push_back(sum);
     return;
   }
    func(ind+1,num,ans,sum+num[ind]);
    func(ind+1,num,ans,sum);
}




vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    func(0,num,ans,0);
    sort(ans.begin(),ans.end());
    return ans;
}