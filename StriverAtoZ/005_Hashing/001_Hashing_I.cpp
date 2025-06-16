// number hashing

#include <bits/stdc++.h>
using namespace std;

// int v[10000000];  // 1e7

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // int v[n];

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // precalc
    vector<int> hash(13,0);
    // int hash[1000000];  // 1e6

    for(int i=0; i<n; i++){
        hash[v[i]]++;
    }

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        // fetch
        cout << hash[x] << "\n";
    }

    return 0;
}

// int arr[1e7] (10 million) in local scope often causes a segmentation fault in most systems.