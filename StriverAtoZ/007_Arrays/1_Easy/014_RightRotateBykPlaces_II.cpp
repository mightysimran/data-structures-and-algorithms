// optimal 
// with built-in reverse function

#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int>& v, int n, int k){
    k = k % n; // Handle k >= n
    reverse(v.begin(), v.end()-k);
    reverse(v.end()-k, v.end());
    reverse(v.begin(), v.end());
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
// Space: 1
// Problem: right rotate an array by k places