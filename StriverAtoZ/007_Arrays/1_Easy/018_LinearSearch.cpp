#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& v, int n, int value){
    for(int i=0; i<n; i++){
        if(v[i]==value){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n, x;
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    cin >> x;
    cout << linearSearch(v,n,x);

    return 0;
}

// Problem: linear search