// optimal

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    temp=v[0];
    for(int i=1; i<n; i++){
        v[i-1]=v[i];
    }
    v[n-1]=temp;

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}


// Problem: left rotate an array by one place