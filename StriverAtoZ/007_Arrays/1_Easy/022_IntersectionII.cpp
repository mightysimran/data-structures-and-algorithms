// optimal (Two Pointer)

#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& x, int n, vector<int>& y, int m){
    int i=0;
    int j=0;
    vector<int> res;

    while(i<n && j<m){
        if(x[i]<y[j]){
            i++;
        }
        else if(y[j]<x[i]){
            j++;
        }
        else{
            res.push_back(x[i]);
            i++;
            j++;
        }
    }

    for(auto i: res){
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

// TC: n+m
// Space: n+m in the worst case
// Problem: intersection of two sorted arrays