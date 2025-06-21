// optimal 
// without built-in reverse function

#include <bits/stdc++.h>
using namespace std;

void rev(vector<int>& v, int start, int end){
    while(start<end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

void rightRotate(vector<int>& v, int n, int k){
    k = k % n; // Handle k >= n
    rev(v,0,n-k-1);
    rev(v,n-k,n-1);
    rev(v,0,n-1);
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