// better

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
        int sum = 0;
        for(int j=i; j<n; j++){
            sum+=v[j];
            mx = max(mx, sum);
        }
    }

    cout << mx;

    return 0;
}

// TC: n²
// Space: 1
// Problem: maximum subarray sum