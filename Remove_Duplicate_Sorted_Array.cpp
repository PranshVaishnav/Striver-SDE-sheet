#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
    int cnt=0;
    
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]!=arr[i+1])
            cnt++;
    }
    cnt++;
    return cnt;
}