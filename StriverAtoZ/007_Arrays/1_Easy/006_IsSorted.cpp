#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    bool sorted = true;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            sorted = false;
            break;
        }
    }

    if(sorted){
        cout << "true";
    }
    else{
        cout << "false";
    }

    return 0;
}

// TC: n
// Problem: whether the array is sorted or not