#include <bits/stdc++.h> 
using namespace std;


long long int modularExponentiation(long long int x,long long int n,long long int m) {
	// Write your code here.
    //(a.b)%m=((a%m)*(b%m))%m;
   long long int res = 1;     
    x = x % m; 
    if (x == 0) return 0;
    while (n > 0)
    {
        if (n & 1)
            res = (res*x) % m;
        n = n>>1; 
        x = (x*x) % m;
    }
    return res;
    
}