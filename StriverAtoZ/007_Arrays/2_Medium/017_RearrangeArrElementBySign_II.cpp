// brute force

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

    vector<int> pos;    
    vector<int> neg;    
    for(int i=0; i<n; i++){
        if(v[i]<0){
            neg.push_back(v[i]);
        }
        else{
            pos.push_back(v[i]);
        }
    }

    for(int i=0; i<n/2; i++){
        v[2*i]=pos[i];
        v[2*i+1]=neg[i];
    }

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: n + n/2
// Space: n
// Problem: rearrange 