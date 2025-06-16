// number hashing - map

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

    // precalc
    map<int,int> mpp;
    // unordered_map<int,int> mpp;

    for(int i=0; i<n; i++){
        mpp[v[i]]++;
    }
    for(auto i:mpp){
        cout << i.first << " -> " << i.second << "\n";
    }

    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        // fetch
        cout << mpp[x] << endl;
    }

    return 0;
}