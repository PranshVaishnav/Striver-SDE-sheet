#include <bits/stdc++.h> 
using namespace std;


void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void sort012(int *arr, int n)
{
   //   Write your code here
    int i=0;
    int j=n-1;
    for(int k=0;k<n;k++)
    {
        if(arr[k]==1)
        {
            continue;
        }
        else if(arr[k]==0)
        {
            while(arr[i]==0)
                i++;
            if(i>=n) break;
            if(i<k)
            swap(&arr[k],&arr[i]);
        }
        else{
             while(arr[j]==2)
             {
                 j--;
             }
            if(j<0) break;
            if(arr[j]==0 and i<j)
            {
                while(arr[i]==0)
                i++;
                
                swap(&arr[i],&arr[j]);
            }
             while(arr[j]==2)
             {
                 j--;
             }
            if(j>k)
            {
                swap(&arr[k],&arr[j]);
            }
            
        }
    }
}