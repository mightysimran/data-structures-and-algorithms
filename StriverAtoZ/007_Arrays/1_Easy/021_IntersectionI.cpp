// brute force

#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& x, int n, vector<int>& y, int m){
    vector<int> res;
    vector<int> visited(m, 0); // prefer smaller array
    for(int i=0; i<n; i++){
        for(int j=0; i<m; j++){
            if(x[i]==y[j] && visited[j]==0){
                res.push_back(x[i]);
                visited[j] = 1; 
                break;
            }
            if(y[j]>x[i]) break; // optimization for sorted arrays
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

// TC: nm
// Space: m
// Problem: intersection of two sorted arrays
