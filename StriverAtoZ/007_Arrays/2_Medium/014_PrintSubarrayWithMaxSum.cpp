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

    int currentStart;
    int start = -1, end = -1;

    for(int i=0; i<n; i++){
        if(sum==0){
            currentStart=i;
        }

        sum+=v[i];
        if(sum>mx){
            mx = sum;
            start=currentStart;
            end=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout << mx << "\n";
    for(int i=start; i<=end; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: 1
// Problem: print the subarray with maximum sum