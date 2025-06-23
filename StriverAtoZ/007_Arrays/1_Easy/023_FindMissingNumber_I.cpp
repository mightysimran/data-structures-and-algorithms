// brute force

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    vector<int> v(n-1);  
    for(int i=0; i<n-1; i++){
        cin >> v[i];
    }

    for(int i=1; i<=n; i++){
        bool found=false;
        for(int x=0; x<n-1; x++){
            if(v[x]==i){
                found=true;
                break;
            }
        }
        if(!found){
            cout << i;
            break;
        }
    }
    return 0;
}

// TC: n²
// Space: 1
// Problem: find missing number in the array
