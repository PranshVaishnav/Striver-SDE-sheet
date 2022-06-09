#include <bits/stdc++.h> 
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    unordered_map<int,int>mp;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            ans=arr[i];
            break;
        }
            
        mp[arr[i]]++;
    }
    return ans;
}
