// Problem: pascal's triangle - return number at the specified row and column
// optimal

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
    int row, column;
    cin >> row >> column;

    cout<<nCr(row-1,column-1);

    return 0;
}

// TC: r
// Space:

