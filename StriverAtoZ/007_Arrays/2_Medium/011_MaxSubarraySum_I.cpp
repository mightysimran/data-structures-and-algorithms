// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int mx=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<j; k++){
                sum += v[k];
            }
            mx=max(mx, sum);
        }
    }

    cout << mx;

    return 0;
}

// TC: n³
// Space: 1
// Problem: maximum subarray sum