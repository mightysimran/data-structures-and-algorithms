// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j] == target){
                cout << i << " " << j;
                return 0;
            } 
        }
    }
    cout << -1;
    return 0;
}

// TC: slightly lesser than n²