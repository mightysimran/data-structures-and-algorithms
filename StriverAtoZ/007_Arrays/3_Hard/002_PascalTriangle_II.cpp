// Problem: pascal's triangle - nth row of Pascal's Triangle
// brute force

#include <bits/stdc++.h>
using namespace std;

long long nCr(int n, int r){
    long long res=1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res /= (i+1);
    }
    return res;
}

int main()
{
    int n;
    cin >> n;

    for(int c=1;c<=n;c++){
        cout<<nCr(n-1,c-1)<<" ";
    }

    return 0;
}

// TC: n × r
// Space: 1