// optimal - Kadane's Algorithm

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll sum = 0;
    ll mx=LONG_MIN;

    for(int i=0; i<n; i++){
        sum+=v[i];
        if(sum>mx){
            mx = sum;
        }
        if(sum<0){
            sum=0;
        }
    }

    cout << mx;
    return 0;
}

// TC: n
// Space: 1
// Problem: maximum subarray sum