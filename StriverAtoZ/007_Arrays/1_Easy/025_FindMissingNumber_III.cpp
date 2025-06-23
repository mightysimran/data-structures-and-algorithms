// optimal (Sum)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max, s;
    cin >> n;
    vector<int> v(n);  
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    max = n*(n+1)/2;
    s=0;
    for(int i=0; i<n; i++){
        s+=v[i];
    }

    cout << max - s;

    return 0;
}

// TC: n
// Problem: find missing number in the array
