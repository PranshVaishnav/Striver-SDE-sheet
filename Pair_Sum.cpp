#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    unordered_map<int, int> mp;
    vector<vector<int>> sol;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp[s - arr[i]] != 0)
        {
            int x = mp[s - arr[i]];
            while (x--)
            {
                vector<int> a;
                a.push_back(arr[i]);
                a.push_back(s - arr[i]);
                sort(a.begin(), a.end());
                sol.push_back(a);
            }
        }
        mp[arr[i]]++;
    }
    sort(sol.begin(), sol.end());
    return sol;
}