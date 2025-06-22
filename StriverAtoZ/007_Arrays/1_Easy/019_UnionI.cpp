// brute force

#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& x, int n, vector<int>& y, int m){
    set<int> s;

    for(int i=0; i<n; i++){
        s.insert(x[i]);
    }
    for(int i=0; i<m; i++){
        s.insert(y[i]);
    }

    vector<int> temp;
    for(auto i: s){
        cout << i << " ";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    vector<int> y(m);

    for(int i=0; i<n; i++){
        cin >> x[i];
    }
    for(int i=0; i<m; i++){
        cin >> y[i];
    }

    fn(x,n,y,m);

    return 0;
}

// TC: O(nlogn + mlogn) + O(n + m)
// Space: n+m
// Problem: union of two sorted arrays