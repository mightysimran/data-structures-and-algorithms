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

    vector<int> res;
    for(int i=0; i<n; i++){
        bool leader=true;
        for(int j=i+1; j<n; j++){
            if(v[j]>v[i]){
                leader=false;
                break;
            }
        }
        if(leader){
            res.push_back(v[i]);
        }
    }

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}

// TC: n²
// Space: 1
// Problem: leaders in an array