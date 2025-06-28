// better (Hashing)

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

    map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[v[i]]++;
    }
    
    for(auto it: mpp){
        if(it.second > n/2){
            cout << it.first;
            return 0;
        }
    }

    cout << -1;
    return 0;
}

// TC: nlogn or n + n
// Space: n
// Problem: find majority element (> n/2 times)