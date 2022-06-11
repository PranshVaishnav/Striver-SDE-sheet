#include <bits/stdc++.h> 
using namespace std;

//Efficient Method

#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {

  unordered_map<int,int>mp;
    int sum=0;
    int cnt=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=arr[i];
        if (arr[i] == 0 && cnt == 0)
            cnt = 1;
        
        if (sum == 0)
            cnt = i + 1;
        
        if(mp.find(sum)!=mp.end())
        {
          cnt = max(cnt, i - mp[sum]);
        }
        else mp[sum]=i;
    }
    return cnt;
}

//Brute Force Method
/****************************************************************
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
    int cnt=-1;
  for(int i=0;i<arr.size();i++)
  {
      int sum=0;
      for(int j=i;j<arr.size();j++)
      {
          sum+=arr[j];
           if(sum==0 and j-i>=cnt)
           {
             cnt=j-i;
           }
      }
     
  }
    return cnt+1;
}
***********************************************************************/
//