// better (Hashing)

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

    vector<int> hash(n+1,0);
    for(int i=0; i<n-1; i++){
        hash[v[i]] = 1;
    }

    for(int i=1; i<=n; i++){
        if(hash[i]==0){
            cout << i;
            break;
        }
    }
    return 0;
}

// TC: 2n
// Space: n
// Problem: find missing number in the array