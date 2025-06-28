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

    for(int i=0; i<n; i++){
        int c = 0;
        for(int j=0; j<n; j++){
            if(v[i]==v[j]){
                c++;
            }
        }
        if(c>n/2){
            cout << v[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}

// TC: n²
// Problem: find majority element (> n/2 times)