// brute force

#include <bits/stdc++.h>
using namespace std;

void moveZerosToTheEnd(vector<int>& v, int n){
    vector<int> temp;
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            temp.push_back(v[i]);
        }
    }

    int nz = temp.size();
    for(int i=0; i<nz; i++){
        v[i]=temp[i];
    }

    for(int i=nz; i<n; i++){
        v[i]=0;
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

    moveZerosToTheEnd(v,n);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n
// Space: n
// Problem: move zeros to the end