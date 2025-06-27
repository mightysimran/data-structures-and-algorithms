// better

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

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i=0; i<n; i++){
        if(v[i]==0) cnt0++;
        else if(v[i]==1) cnt1++;
        else cnt2++;
    }

    int index = 0;
    
    for(int i=0; i<cnt0; i++){
        v[index++]=0;
    }
    for(int i=0; i<cnt1; i++){
        v[index++]=1;
    }
    for(int i=0; i<cnt2; i++){
        v[index++]=2;
    }

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

// TC: 2n
// Space: 1
// Problem: sort an array of 0s, 1s and 2s