#include <bits/stdc++.h> 
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here
    vector<int>ans;
  unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    for(auto i:mp)
    {
        if(i.second>(arr.size()/3))
        {
            ans.push_back(i.first);
        }
    }
    return ans;
}