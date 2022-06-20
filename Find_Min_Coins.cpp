#include<bits/stdc++.h>
using namespace std;

int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>a={1000,500,100,50,20,10,5,2,1};
    int cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(amount==0)
          break;
        
        if(amount>=a[i])
        {
         cnt+=amount/a[i];
         amount-=(amount/a[i])*a[i];
        }
        else{
            continue;
        }
    }
    return cnt;
}
