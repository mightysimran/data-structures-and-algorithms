// brute force

#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int>& v, int n, int k){
    k = k % n; // Handle k >= n
    vector<int> temp;

    for(int i=n-k; i<n; i++){
        temp.push_back(v[i]);
    }

    for(int i=n-k-1; i>=0; i--){
        v[i+k]=v[i];
    }

    for(int i=0; i<k; i++){
        v[i]=temp[i];
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int k;
    cin >> k;
    
    rightRotate(v,n,k);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: k
// Problem: right rotate an array by k places