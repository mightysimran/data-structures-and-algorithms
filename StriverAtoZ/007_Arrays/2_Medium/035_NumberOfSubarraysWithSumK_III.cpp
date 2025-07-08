// optimal 
// Hashing and prefix sum

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

    map<int, int> mpp;
    mpp[0] = 1;

    int prefix_sum = 0, count = 0;
    for(int i=0; i<n; i++){
        prefix_sum += v[i];
        
        int complement = prefix_sum - k;
        count += mpp[complement];

        mpp[prefix_sum]++;

        // mpp[prefix_sum]++ means:
        // "I've now seen this prefix sum one more time. Remember that!"
    }

    cout << count;

    return 0;
}

// TC: n logn
// Space: n
// Problem: number of subarrays with sum k