
#include<bits/stdc++.h>
using namespace std;

 void func(string&s,vector<string>&ans,string dp,vector<int>&visited)
 {
     if(dp.size()==s.size())
     {
         ans.push_back(dp);
         return;
     }
     
     for(int i=0;i<s.size();i++)
     {
         if(!visited[i])
         {
             visited[i]=1;
             dp.push_back(s[i]);
             func(s,ans,dp,visited);
             visited[i]=0;
             dp.pop_back();
         }
     }
 }



vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string>ans;
    string dp;
    vector<int>visited(s.size(),0);
    func(s,ans,dp,visited);
    return ans;
}