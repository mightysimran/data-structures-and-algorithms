// better (Hashing) - for positives
// optimal - for positives and negatives both

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int fn(vector<int>& v, int n, ll k){
    map<ll, int> prefix_sum;
    ll sum = 0;
    int maxlen = 0;

    for(int i=0; i<n; i++){
        sum += v[i];
        if(k==sum){
            maxlen=max(maxlen,i+1);
        }

        ll rem=sum-k;
        if(prefix_sum.find(rem) != prefix_sum.end()){
            int len=i-prefix_sum[rem];
            maxlen=max(maxlen, len);
        }
        
        if(prefix_sum.find(sum) == prefix_sum.end()){
            prefix_sum[sum]=i;
        }
    }

    return maxlen;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cout << fn(v,n,k);

    return 0;
}

// TC: nlogn
// Space: n
// Problem: longest subarray with sum k