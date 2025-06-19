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

    sort(v.begin(), v.end()); // TC: nlogn

    cout << v[n-1];

    return 0;
}

// Total TC: nlogn 
// Problem: largest element in an array