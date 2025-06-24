// optimal (Two Pointer Sliding Window) 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void fn(vector<int>& v, int n, ll k){
    int left=0;
    int right=0;
    ll sum=v[0];
    int maxlen=0;

    while(right < n){
        while(left<=right && sum>k){
            sum-=v[left];
            left++;
        }
        if(k==sum){
            maxlen=max(maxlen, right-left+1);
        }
        right++;
        if(right<n){
            sum+=v[right];
        }
    }

    cout << maxlen;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    fn(v,n,k);

    return 0;
}

// TC: n
// Space: 1
// Problem: longest subarray with sum k