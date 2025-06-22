// optimal (Two Pointer)

#include <bits/stdc++.h>
using namespace std;

void fn(vector<int>& x, int n, vector<int>& y, int m){
    int i=0;
    int j=0;
    vector<int> v;

    while(i<n && j<m){
        if(x[i]<=y[j]){
            if(v.empty() || v.back() != x[i]){
                v.push_back(x[i]);
            }
            i++;
        }
        else{
            if(v.empty() || v.back() != y[j]){
                v.push_back(y[j]);
            }
            j++;    
        }
    }
    while(j<m){
        if(v.empty() || v.back() != y[j]){
            v.push_back(y[j]);
        }
        j++; 
    }
    while(i<n){
        if(v.empty() || v.back() != x[i]){
            v.push_back(x[i]);
        }
        i++; 
    }

    for(auto i: v){
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
// Space: 1
// Problem: union of two sorted arrays