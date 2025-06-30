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

    int x = 0, y = 0;
    for(int i=0; i<n; i++){
        if(i%2){
            v[i]=neg[x++];
        }
        else{
            v[i]=pos[y++];
        }
    }

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: 2n
// Space: n
// Problem: rearrange 