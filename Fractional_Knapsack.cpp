#include<bits/stdc++.h>
using namespace std;

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double total_value;
    vector<pair<double,int>>vw;
    for(int i=0;i<n;i++)
    {
      vw.push_back(make_pair(items[i].second/(double)items[i].first,i));
    }
    
     sort(vw.begin(),vw.end());
    for(int i=n-1;i>=0;i--)
    {
        int ind=vw[i].second;
        if(w==0)
            break;
        //first->weight;
        //second->value;
        if(items[ind].first<=w)
        {
            total_value+=items[ind].second;
            w=w-items[ind].first;
        }
        else{
            total_value+=vw[i].first*w;
            w=0;
        }
    }
        return total_value;
    
}