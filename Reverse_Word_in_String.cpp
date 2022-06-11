
#include<bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    // Write your code here.
    vector<string>arr;
    string sol="";
    string a="";

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
                arr.push_back(a);
                a="";         
        }
        else if(i==str.length()-1)
        {
              a=a+str[i];
            arr.push_back(a);
                a=""; 
        }
        else{
            a=a+str[i];
        }
    } 

    reverse(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!="")
        sol+=arr[i]+" ";
    }
    return sol;
    
}