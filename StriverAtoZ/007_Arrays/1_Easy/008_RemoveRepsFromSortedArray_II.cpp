// optimal (Two Pointer)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v = {1,1,1,2,2,3};

    int i=0;
    for(int j=1; j<n; j++){
        if(v[j]!=v[i]){
            v[i+1] = v[j];
            i++;
        }
    }

    cout << i+1;

    return 0;
}

// TC: n
// SC: 1
// Problem: remove repetitions in-place from sorted array