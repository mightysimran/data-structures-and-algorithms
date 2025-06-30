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

    int mn = v[0];
    int maxProfit=0;

    for(int i=1; i<n; i++){
        int cost = v[i]-mn;
        maxProfit=max(maxProfit, cost);
        mn=min(mn, v[i]);
    }

    cout << maxProfit;

    return 0;
}

// TC: n
// Space: 1
// Problem: maximize the profit