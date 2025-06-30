// optimal

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

    vector<int> fresh(n,0);
    int x = 0, y = 1;
    for(int i=0; i<n; i++){
        if(v[i]<0){
            fresh[y]=v[i];
            y+=2;
        }
        else{
            fresh[x]=v[i];
            x+=2;
        }
    }

    for(int i=0; i<n; i++){
        cout << fresh[i] << " ";
    }

    return 0;
}

// TC: n
// Space: n
// Problem: rearrange
