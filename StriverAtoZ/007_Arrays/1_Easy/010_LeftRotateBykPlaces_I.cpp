// brute force

#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>& v, int n, int k){
    k = k % n; // Handle k >= n
    vector<int> temp;

    for(int i=0; i<k; i++){
        temp.push_back(v[i]);
    }

    for(int i=k; i<n; i++){
        v[i-k]=v[i];
    }

    // int z = 0;
    // for(int i=n-k; i<n; i++){
    //     v[i]=temp[z];
    //     z++;
    // }

    // for(int i=n-k; i<n; i++){
    //     v[i]=temp[i-(n-k)];
    // }

    for(int i=0; i<k; i++){
        v[n-k+i]=temp[i];
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
    
    leftRotate(v,n,k);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: k
// Problem: left rotate an array by k places