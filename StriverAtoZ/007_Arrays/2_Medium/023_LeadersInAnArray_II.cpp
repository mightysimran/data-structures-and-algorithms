// optimal

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

    vector<int> res;

    int mx = INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(v[i]>mx){
            res.push_back(v[i]);
            mx=v[i];
        }
    }

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}

// TC: n
// Space: 1
// Problem: leaders in an array