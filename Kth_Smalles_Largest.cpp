#include<bits/stdc++.h>
using namespace std;

#include<queue>

int get_min(priority_queue<int>q,int k)
{
     int a=q.top();
      while(k--)
      {
          a=q.top();
       q.pop();
      }
    return a; 
}

int get_max(priority_queue<int>q,int k)
{
    k--;
      while(k)
      {
          q.pop();
          k--;
      }
    return q.top(); 
}


vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    priority_queue<int> q;
    for(int i=0;i<n;i++)
    {
        q.push(arr[i]);
    }
    
    vector<int> sol;
    //kth maximum
    int maximum=get_max(q,k);
    int minimum=get_min(q,n-k+1);
    sol.push_back(minimum);
       sol.push_back(maximum);


    
    return sol;
}