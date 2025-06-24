// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int len=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int x=i; x<=j; x++){
                sum+=v[x];
            }
            if(k==sum){
                len=max(len,j-i+1);
            }
        }
    }

    cout << len;

    return 0;
}

// TC: n³
// Space: 1
// Problem: longest subarray with sum k